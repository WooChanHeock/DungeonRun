using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoliceCar : Enemy
{
    private void Awake()
    {
        maxHp = 9999;
        currentHp = maxHp;
    }

    public override void EnemyDamaged(float damage, float penetration, float idamage, float tdamage, int atktime)
    {

    }
}
