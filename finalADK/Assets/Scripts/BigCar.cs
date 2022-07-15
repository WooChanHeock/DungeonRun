using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BigCar : Enemy
{
    private void Awake()
    {
        maxHp = 10;
        currentHp = maxHp;
    }

    public override void EnemyDamaged(float damage, float penetration, float idamage, float tdamage, int atktime)
    {

        Hp -= DamagedReduce(damage, penetration, idamage, tdamage, atktime);
        //Instantiate(effect, transform.position, Quaternion.identity);
    }
}
