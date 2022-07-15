using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class TouchPanel : MonoBehaviour, IPointerClickHandler
{
    private GameObject player;
    private PlayerMove playerMove;

    public float orginPos;

    private void Start()
    {
        player = FindObjectOfType<PlayerInfo>().gameObject;
        playerMove = FindObjectOfType<PlayerMove>();
       
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        Debug.Log("Click"+ playerMove.posDic[orginPos]);
        if (player.GetComponent<PlayerInfo>().anim.GetCurrentAnimatorStateInfo(0).IsName("infantry_04_attack_A") &&
                        player.GetComponent<PlayerInfo>().anim.GetCurrentAnimatorStateInfo(0).normalizedTime != 1.0f)
        {
            return;
        }
            if (player.transform.position.x == orginPos)
        {
            player.GetComponent<PlayerAttack>().AttackCheck();
            
            return;
        }
        Debug.Log(playerMove.posDic[orginPos] + "TEST");
        playerMove.distance = 1f;
        playerMove.isMoves[playerMove.posDic[orginPos]] = true;

    }
}
