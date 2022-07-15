using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMove : MonoBehaviour
{
    [SerializeField]
    private GameObject targetPos;

    public float offsetZ;
    public float delayTime = 3;

    private void LateUpdate()
    {
        Vector3 FixedPos =
            new Vector3(
                transform.position.x,
                transform.position.y,
                targetPos.transform.position.z + offsetZ);
        transform.position = Vector3.Lerp(transform.position, FixedPos, Time.deltaTime * delayTime);
    }
}
