using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ButtonManager : MonoBehaviour
{
    GameManager gameManager;
    PlayerMove playerMove;

    bool pause;

    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        playerMove = FindObjectOfType<PlayerMove>();
        pause = false;
    }

    public void MainReturn()
    {
        SceneManager.LoadScene(0);
    }

    public void GameStart()
    {
        SceneManager.LoadScene(1);
    }

    public void PauseGame()
    {
       
            gameManager.pause = !pause;
            playerMove.pause = !pause;
            pause = !pause;  
    }

    public void Restart()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
