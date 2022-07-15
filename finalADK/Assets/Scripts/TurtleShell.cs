using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TurtleShell : Enemy
{
    public GameObject effect;
    public Slider hpSlider;
    public GameObject boom;
    public float destroyTime = 5f;
    public Animator anim;
    public Text ammorText;

    // Start is called before the first frame update
    private new void Start()
    {
        GameManager gameManager = FindObjectOfType<GameManager>();

        base.Start();
        anim = this.GetComponent<Animator>();
        DieEvent += () =>
        {
            enemyAudio.GetComponent<Audio>().audioSource.clip = enemyAudio.GetComponent<Audio>().turtleShellDie;
            enemyAudio.GetComponent<Audio>().audioSource.Play();
            anim.SetTrigger("Die");
            Instantiate(boom, transform.position, Quaternion.identity);
            Destroy(gameObject, destroyTime);
        };
        HitEvent += () =>
        {
            enemyAudio.GetComponent<Audio>().audioSource.clip = enemyAudio.GetComponent<Audio>().turtleShellHit;
            enemyAudio.GetComponent<Audio>().audioSource.Play();
            anim.Rebind();
            anim.SetTrigger("IdleToHit");
        };
        maxHp = 4;
        currentHp = maxHp;
        Ammor = 50;
        ammorText.text = Ammor.ToString();
        if (PlayerPrefs.GetInt("equipEffect") != 0)
            effect = gameManager.effectList[PlayerPrefs.GetInt("equipEffect")];
    }

    // Update is called once per frame
    void Update()
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
        Instantiate(effect, transform.position, Quaternion.identity);
        GameObject deleteText = Instantiate(dmgText, transform.position, Quaternion.identity);
        deleteText.GetComponentInChildren<Text>().text = DamagedReduce(damage, penetration, idamage, tdamage, atktime).ToString();
        Destroy(deleteText, 0.5f);
    }
}
