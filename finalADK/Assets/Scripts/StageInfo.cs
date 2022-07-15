using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StageInfo : MonoBehaviour
{
    public float stageTime;
    public AudioClip stageBgm;

    public GameObject [] gList;
    public float interval;
    public GameObject player;
    public GameObject[] eList;

    private void Start()
    {
        player = GameObject.Find("Player");
    }

    private void Update()
    {
        foreach (GameObject gameObject in gList)
        {
            if (player.transform.position.z < gameObject.transform.position.z - interval)
            {
                
                gameObject.transform.position = new Vector3(0, 0, gameObject.transform.position.z - interval * gList.Length);
            }
        }
        foreach(GameObject gameObject in eList)
        {
            if (gameObject.transform.position.z+22 >= player.transform.position.z)
            {
                gameObject.SetActive(true);
            }
        }
    }
}
