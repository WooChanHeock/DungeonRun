using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Goal : MonoBehaviour
{
    GameManager gameManager;
    PlayerMove playerMove;
    private void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        playerMove = FindObjectOfType<PlayerMove>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            gameManager.pause = true;
            playerMove.pause = true;
            gameManager.clearUI.SetActive(true);
            gameManager.clearUI.GetComponent<Animator>().SetTrigger("FadeIn");
            PlayerPrefs.SetInt("stageNum", PlayerPrefs.GetInt("stageNum")+1);
            PlayerPrefs.SetInt("gold", PlayerPrefs.GetInt("gold") + 50);
        }
    }

}
