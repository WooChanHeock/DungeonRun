using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Enemy : MonoBehaviour
{
    public float maxHp;
    public float currentHp;
    public float exp;
    public Action DieEvent;
    public Action HitEvent;
    public GameObject enemyAudio;
    public float ammor;
    public GameObject dmgText;

    protected void Start()
    {
        enemyAudio = GameObject.Find("Audio");
        DieEvent += Die;
        exp = 2;
    }

    public virtual void Die()
    {
        Destroy(gameObject, 1.0f);
        FindObjectOfType<PlayerInfo>().Exp += exp;
    }

    public float Ammor
    {
        get
        {
            return ammor;
        }
        set
        {
            ammor = value;
        }
    }

    public float Hp
    {
        get
        {
            return currentHp;
        }
        set
        {
            currentHp = value;
            if (currentHp <= 0)
            {
                DieEvent();
            }
            else
            {
                HitEvent();
            }
            
        }
    }

    public virtual void EnemyDamaged(float damage, float penetration, float idamage , float tdamage, int atktime)
    {

    }

    public float DamagedReduce(float damage, float penetration, float idamage, float tdamage, int atktime)
    {
        if (Ammor - penetration > 0)
        {
            Debug.Log(Math.Round(idamage * atktime * damage * (1 - (Ammor - penetration) / ((Ammor - penetration) + 50)) + (atktime * tdamage),2) + " damage!");
            return (float)Math.Round(idamage * atktime * damage * (1 - (Ammor - penetration) / ((Ammor - penetration) + 50)) + (atktime * tdamage),2);
        }
        else
        {
            Debug.Log(Math.Round(idamage * atktime * damage + (atktime * tdamage),2) + " damage!");
            return (float)Math.Round(idamage * atktime * damage + (atktime * tdamage),2);
        }
    }
}
