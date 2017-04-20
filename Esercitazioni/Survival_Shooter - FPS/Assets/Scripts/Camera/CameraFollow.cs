using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class CameraFollow : MonoBehaviour {

	public Transform playerTransform;
	public float smoothing = 5f;
	public float sensitivex = 5f;

	private Vector3 _offset;

	// Use this for initialization
	void Start () 
	{
		if (playerTransform != null) 
		{
			_offset = transform.position - playerTransform.position;
		}
	}

	/*void Rotate()
	{
		transform.Rotate(0, Input.GetAxis("Mouse X")*sensitivex, 0);
	}*/
	
	// Update is called once per frame
	void FixedUpdate () 
	{
		if (playerTransform != null) {
			Vector3 newCameraPosition = playerTransform.position + _offset;
			transform.position = Vector3.Lerp (transform.position, newCameraPosition, smoothing * Time.deltaTime);
			//Rotate ();
		}
	}
}
