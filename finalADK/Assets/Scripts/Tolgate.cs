using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tolgate : MonoBehaviour
{
    GameManager gameManager;
    PlayerMove playerMove;
    [SerializeField]


    // Start is called before the first frame update
    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        playerMove = FindObjectOfType<PlayerMove>();
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            gameManager.GetAbility();
            gameObject.GetComponent<BoxCollider>().enabled = false;
        }
    }
}
