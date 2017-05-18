using UnityEngine;
using System.Collections;

public class Color : MonoBehaviour
{
    public float R;
    public float G;
    public float B;
    
	// Use this for initialization
	void Start ()
    {
        GetComponent<Renderer>().material.color = new UnityEngine.Color(R, G, B);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
