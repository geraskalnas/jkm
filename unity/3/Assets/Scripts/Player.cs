using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {
	[SerializeField]
	private Stat health;
	[SerializeField]
	private Stat energy;
	[SerializeField]
	private Stat shield;

	private Rigidbody2D myRigidbody;
	[SerializeField]
	private float speed;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.Q)) 
		{
			health.CurrentVal -= 10;
		}
		if (Input.GetKeyDown (KeyCode.E)) 
		{
			energy.CurrentVal -= 10;
		}
		if (Input.GetKeyDown (KeyCode.S)) 
		{
			shield.CurrentVal -= 10;
		}
	}

	public void Awake()
	{
		health.Initialize();
		energy.Initialize();
		shield.Initialize();
	}
}
