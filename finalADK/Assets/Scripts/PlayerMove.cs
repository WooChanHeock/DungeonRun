using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class PlayerMove : MonoBehaviour
{
    const float first = -2.25f;
    const float second = -0.75f;
    const float third = 0.75f;
    const float fourth = 2.25f;

    [SerializeField]
    private GameObject player;
    Vector3 movePosition;

    public Dictionary<float, int> posDic = new Dictionary<float, int>();

    public List<bool> isMoves = new List<bool>();
     
    RaycastHit hit;
    public LayerMask layerMask;
    public float distance;
    public float speed;
    public bool pause;

    public void Start()
    {
        posDic.Add(first, 0);
        posDic.Add(second, 1);
        posDic.Add(third, 2);
        posDic.Add(fourth, 3);

        for(int i=0;i<4;i++)
            isMoves.Add(false);
        pause = false;

        
    }

    // Update is called once per frame
    void Update()
    {
        if (!pause)
        {
            Debug.DrawRay(player.transform.position, transform.forward, Color.red, 1f);
            Debug.DrawRay(player.transform.position, transform.right, Color.red, 1f);
            Debug.DrawRay(player.transform.position, -transform.right, Color.red, 1f);
            for (int i = 0; i < isMoves.Count; i++)
            {
                if (isMoves[i])
                {
                    MoveLine(posDic.FirstOrDefault(x => x.Value == i).Key);
                    return;
                }
            }
            if (!Physics.Raycast(player.transform.position, transform.forward, out hit, 1f, layerMask))
            {
                if (player.GetComponent<PlayerInfo>().anim.GetCurrentAnimatorStateInfo(0).IsName("infantry_04_attack_A") &&
                        player.GetComponent<PlayerInfo>().anim.GetCurrentAnimatorStateInfo(0).normalizedTime != 1.0f)
                {
                    return;
                }
                if (player.GetComponent<PlayerInfo>().pState == PlayerInfo.PlayerState.Attack)
                {
                    
                        player.GetComponent<PlayerInfo>().anim.SetTrigger("AttackToRun");
                        Debug.Log("AttackToRun");
                        player.GetComponent<PlayerInfo>().pState = PlayerInfo.PlayerState.Run;
                }
                else if (player.GetComponent<PlayerInfo>().pState == PlayerInfo.PlayerState.Idle)
                {
                    player.GetComponent<PlayerInfo>().anim.SetTrigger("IdleToRun");
                    Debug.Log("IdleToRun");
                    player.GetComponent<PlayerInfo>().pState = PlayerInfo.PlayerState.Run;
                }
                movePosition = player.transform.position;
                movePosition.z += Time.deltaTime * speed;
                player.transform.position = movePosition;
                //Debug.Log("앞으로!");
                
                
            }
            else
            {
                if (player.GetComponent<PlayerInfo>().pState == PlayerInfo.PlayerState.Attack)
                {
                    player.GetComponent<PlayerInfo>().anim.SetTrigger("AttackToIdle");
                    Debug.Log("AttackToIdle");
                    player.GetComponent<PlayerInfo>().pState = PlayerInfo.PlayerState.Idle;
                }
                else if (player.GetComponent<PlayerInfo>().pState == PlayerInfo.PlayerState.Run)
                {
                    player.GetComponent<PlayerInfo>().anim.SetTrigger("RunToIdle");
                    Debug.Log("RunToIdle");
                    player.GetComponent<PlayerInfo>().pState = PlayerInfo.PlayerState.Idle;
                }
                    
            }
        }
    }

    void MoveLine(float targetPos)
    {
        if (player.transform.position.x == targetPos) 
        { 
             isMoves[posDic[targetPos]] = false;
            return; 
        }

        Vector3 dir;
        if (targetPos > player.transform.position.x) dir = -transform.right;
        else dir = transform.right;

        if (Physics.Raycast(player.transform.position, dir, out hit, distance, layerMask))
        {
                   
            if (hit.transform != null)
            {
                if (transform.GetComponent<PlayerInfo>().pState == PlayerInfo.PlayerState.Idle)
                {
                    transform.GetComponent<PlayerInfo>().anim.SetTrigger("IdleToAttack");
                    Debug.Log("IdleToAttack");
                    transform.GetComponent<PlayerInfo>().pState = PlayerInfo.PlayerState.Attack;

                }
                else if (transform.GetComponent<PlayerInfo>().pState == PlayerInfo.PlayerState.Run)
                {
                    Debug.Log("RunToAttack");
                    transform.GetComponent<PlayerInfo>().anim.SetTrigger("RunToAttack");
                    transform.GetComponent<PlayerInfo>().pState = PlayerInfo.PlayerState.Attack;
                }
                Debug.Log("Move 벽충돌");
                hit.transform.GetComponent<Enemy>().EnemyDamaged(transform.GetComponent<PlayerInfo>().AttackDamage, transform.GetComponent<PlayerInfo>().ArmorPenetration, transform.GetComponent<PlayerInfo>().DamageIncrease, transform.GetComponent<PlayerInfo>().TrueDamage, transform.GetComponent<PlayerInfo>().AttackTime);
                isMoves[posDic[targetPos]] = false;
                return;
            }
        }
        distance = 0.6f;
        player.transform.position = Vector3.MoveTowards(player.transform.position, new Vector3(targetPos, player.transform.position.y, player.transform.position.z), 0.3f);

    }
}
