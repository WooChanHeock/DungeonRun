using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SmallCar: Enemy
{

    public GameObject effect;
    public Slider hpSlider;
    public GameObject boom;
    public float destroyTime = 5f;

    private new void Start()
    {
        base.Start();
        // 람다를 통해 델리게이트에 추가!
        DieEvent += () =>
        {
            enemyAudio.GetComponent<Audio>().audioSource.clip = enemyAudio.GetComponent<Audio>().boom;
            enemyAudio.GetComponent<Audio>().audioSource.Play();
            Instantiate(boom, transform.position, Quaternion.identity);
            Destroy(gameObject, destroyTime);
        };
        HitEvent += () =>
        {
            enemyAudio.GetComponent<Audio>().audioSource.clip = enemyAudio.GetComponent<Audio>().carHit;
            enemyAudio.GetComponent<Audio>().audioSource.Play();
        };
        maxHp = 3;
        currentHp = maxHp;
        Ammor = 10;
    }

    private void Update()
    {
        hpSlider.value = (float)currentHp / (float)maxHp;
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
