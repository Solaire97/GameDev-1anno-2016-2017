using UnityEngine;
using System.Collections.Generic;
using System;
using System.Collections;


public class SpawnBlue : MonoBehaviour
{
    public GameObject fighter;
    public GameObject spawn;
    private float randX;
    private Vector3 position;
    private GameObject instance;

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Y))
        {
            Spawnvehicle(fighter);
        }
    }

    private void Spawnvehicle(GameObject vehicle)
    {
        instance = (GameObject)Instantiate(vehicle, spawn.transform.position, spawn.transform.rotation);
    }
}
