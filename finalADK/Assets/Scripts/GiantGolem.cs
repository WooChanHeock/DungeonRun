using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GiantGolem : Enemy
{
    public GameObject effect;
    public Slider hpSlider;
    public GameObject boom;
    public float destroyTime = 5f;
    public Animator anim;
    public Text ammorText;

    private new void Start()
    {
        GameManager gameManager = FindObjectOfType<GameManager>();

        base.Start();
        anim = this.GetComponent<Animator>();
        DieEvent += () =>
        {
            enemyAudio.GetComponent<Audio>().audioSource.clip = enemyAudio.GetComponent<Audio>().slimeDie;
            enemyAudio.GetComponent<Audio>().audioSource.Play();
            anim.SetTrigger("Die");
            Instantiate(boom, transform.position, Quaternion.identity);
            Destroy(gameObject, destroyTime);
        };
        HitEvent += () =>
        {
            enemyAudio.GetComponent<Audio>().audioSource.clip = enemyAudio.GetComponent<Audio>().slimeHit;
            if (PlayerPrefs.GetInt("equipEffect") != 0)
                enemyAudio.GetComponent<Audio>().audioSource.clip = gameManager.effectSoundList[PlayerPrefs.GetInt("equipEffect")];
            enemyAudio.GetComponent<Audio>().audioSource.Play();
            anim.Rebind();
            anim.SetTrigger("IdleToHit");
        };
        maxHp = 120;
        currentHp = maxHp;
        Ammor = 60;
        ammorText.text = Ammor.ToString();
        if (PlayerPrefs.GetInt("equipEffect") != 0)
            effect = gameManager.effectList[PlayerPrefs.GetInt("equipEffect")];
    }

    private void Update()
    {
        hpSlider.value = (float)currentHp / (float)maxHp;
        if (anim.GetCurrentAnimatorStateInfo(0).IsName("GetHit") &&
                        anim.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f)
        {
            anim.Rebind();
            anim.SetTrigger("HitToIdle");
        }
    }

    public override void EnemyDamaged(float damage, float penetration, float idamage, float tdamage, int atktime)
    {
        Hp -= DamagedReduce(damage, penetration, idamage, tdamage, atktime);
        Vector3 vector = transform.position;
        vector.y += 3;
        Instantiate(effect, transform.position, Quaternion.identity);
        GameObject deleteText = Instantiate(dmgText, vector, Quaternion.identity);
        deleteText.GetComponentInChildren<Text>().text = DamagedReduce(damage, penetration, idamage, tdamage, atktime).ToString();
        Destroy(deleteText, 0.5f);
    }
}
