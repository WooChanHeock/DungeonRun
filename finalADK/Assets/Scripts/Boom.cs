using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Boom : MonoBehaviour
{
    Collider[] colls;
    public float destroyTime = 2.0f;

    private void Start()
    {
        colls = Physics.OverlapSphere(transform.position, 0.05f);

        foreach (Collider coll in colls)
        {
            if (coll.gameObject.layer == 6)
            {
                Vector3 position = transform.position;
                position.x += Random.Range(-0.5f, 0.5f);
                position.z += Random.Range(-1f, 1f);

                coll.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.None;
                                                                // 폭발력, 위치, 범위, 높이
                coll.GetComponent<Rigidbody>().AddExplosionForce(1500f, position, 10f, 2000f);
            }
        }

        Destroy(gameObject, destroyTime);
    }


}
