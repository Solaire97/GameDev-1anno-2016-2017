using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Movement : MonoBehaviour
{
    public float speed;
    public string target;
    public GameObject bullet;
    public float radius;
    public float force = 5.0f;
    public float delay;
    private GameObject instantiatedBullet;
    private float previousSpeed;
    private Quaternion previousQuaternion;
    Collider[] targetCollider;

    void Start()
    {
        previousQuaternion = transform.rotation;
        previousSpeed = speed;
    }
    // Update is called once per frame
    void FixedUpdate()
    {
        this.transform.Translate(Vector3.forward * Time.fixedDeltaTime * speed);
        bool enemyFound = false;
        targetCollider = Physics.OverlapSphere(transform.position, radius);
        for (int i = 0; i < targetCollider.Length; i++)
        {
            if (targetCollider[i].CompareTag(target))
            {
                speed = 0;
                Vector3 dir = targetCollider[i].transform.position - transform.position;
                transform.rotation = Quaternion.LookRotation(dir);
                enemyFound = true;
                StartCoroutine("Shot", delay);
                break;
                //StartCoroutine("Shot", delay);
            }
        }

        if (!enemyFound)
        {
            transform.rotation = previousQuaternion;
            speed = previousSpeed;
        }
    }
    void OnTriggerExit(Collider collider)
    {
        if (collider.CompareTag("Terrain"))
        {
            Destroy(gameObject);
        }
    }

    IEnumerator Shot(float delay)
    {
        instantiatedBullet = (GameObject)Instantiate(bullet, transform.position, transform.rotation);
        instantiatedBullet.GetComponent<Rigidbody>().velocity = transform.TransformDirection(Vector3.forward * force);
        yield return new WaitForSeconds(delay);
        StopCoroutine("Shot");
    }
}
