using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class EnemyMove : MonoBehaviour {

	public float speed;

	public bool moveRight;

	[SerializeField]
	private Transform wallPoint;

	[SerializeField]
	private float wallRadius;

	[SerializeField]
	private LayerMask whatIsWall;
	[SerializeField]
	private bool hittingWall;

	private bool notAtEdge;
	public Transform edgePoint;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		hittingWall = Physics2D.OverlapCircle (wallPoint.position, wallRadius, whatIsWall);

		notAtEdge = Physics2D.OverlapCircle (edgePoint.position, wallRadius, whatIsWall);
		if (hittingWall || !notAtEdge)
			moveRight = !moveRight;

		if (moveRight) {
			transform.localScale = new Vector3 (0.4f, 0.4f, 0.4f);
			this.GetComponent<Rigidbody2D> ().velocity = new Vector2 (speed, this.GetComponent<Rigidbody2D> ().velocity.y);
		} else {
			transform.localScale = new Vector3 (-0.4f, 0.4f, 0.4f);
			this.GetComponent<Rigidbody2D> ().velocity = new Vector2 (-speed, this.GetComponent<Rigidbody2D> ().velocity.y);
		}
	}
}
