using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAttack : MonoBehaviour
{
    RaycastHit hit;
    public LayerMask layerMask;
    float distance = 1f; // Ray�� ����

    private void Update()
    {
        Debug.DrawRay(transform.position, transform.forward * distance, Color.red, 0.3f);
    }

    public void AttackCheck()
    {
        if (Physics.Raycast(transform.position, transform.forward, out hit, distance, layerMask))
        {
            // hitInfo�� ������ ����� ó��! And �÷��̾� ����� ���⿡��
            // ������ �Ǹ�
            if (hit.transform != null)
            {

                //Debug.Log(transform.GetComponent<PlayerInfo>().getAttackDamage());
                if (transform.GetComponent<PlayerInfo>().pState == PlayerInfo.PlayerState.Idle)
                {
                    transform.GetComponent<PlayerInfo>().anim.SetTrigger("IdleToAttack");
                    Debug.Log("IdleToAttack");
                    transform.GetComponent<PlayerInfo>().pState = PlayerInfo.PlayerState.Attack;
                }
               
                   
                hit.transform.GetComponent<Enemy>().EnemyDamaged(transform.GetComponent<PlayerInfo>().AttackDamage, transform.GetComponent<PlayerInfo>().ArmorPenetration, transform.GetComponent<PlayerInfo>().DamageIncrease, transform.GetComponent<PlayerInfo>().TrueDamage, transform.GetComponent<PlayerInfo>().AttackTime);  
            }
        }
    }
}
