using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {

	private Rigidbody2D myRigidbody;
	[SerializeField]
	private float speed;

	[SerializeField]
	private Transform groundPoint;
	[SerializeField]
	private float groundRadius;
	[SerializeField]
	private LayerMask whatIsGround;
	[SerializeField]
	private bool grounded;
	[SerializeField]
	private float jumpHight;

	[SerializeField]
	private bool attack;

	[SerializeField]
	private Animator anim;
	[SerializeField]
	private bool facingRight;


	[SerializeField]
	private Stat health;
	[SerializeField]
	private Stat energy;
	[SerializeField]
	private Stat shield;


	public void Jump(){
		myRigidbody.velocity = new Vector2 (myRigidbody.velocity.x, jumpHight);
	}
	private void Flip(float horizontal)
	{
		if (horizontal > 0 && !facingRight || horizontal < 0 && facingRight) {
			facingRight = !facingRight;
			Vector3 theScale = transform.localScale;
			theScale.x *= -1;
			transform.localScale = theScale;
		}
	}

	private void HandleMovement(float horizontal)
	{
		if (!this.anim.GetCurrentAnimatorStateInfo (0).IsTag ("Attack")) {
			myRigidbody.velocity = new Vector2 (horizontal * speed, myRigidbody.velocity.y);
		}
		if (myRigidbody.velocity.y < 0) {
			anim.SetBool ("land", true);
		}
		//myRigidbody.velocity = new Vector2 (horizontal * speed, myRigidbody.velocity.y);
		anim.SetFloat ("speed", Mathf.Abs (horizontal));
		if (Input.GetKeyDown (KeyCode.Space) && grounded) {
			Jump ();
			anim.SetTrigger ("jump");
		}
	}
	private void HandleLayer(){
		if (!grounded) {
			anim.SetLayerWeight (1, 1);
		} else {
			anim.SetLayerWeight (1, 0);
		}
	}
	private void HandleAttacks(){
		if (attack && !this.anim.GetCurrentAnimatorStateInfo (0).IsTag ("Attack") && grounded) {
			anim.SetTrigger ("attack");
			myRigidbody.velocity = Vector2.zero;
		}
	}
	private void HandleInput(){
		if (Input.GetKeyDown (KeyCode.Mouse0)) {
			attack = true;
		}
	}

	void FixedUpdate()
	{
		float horizontal = Input.GetAxis ("Horizontal");
	
		grounded = Physics2D.OverlapCircle (groundPoint.position, groundRadius, whatIsGround);
		if (grounded) {
			anim.ResetTrigger ("jump");
			anim.SetBool ("land", false);
		}

		HandleLayer ();
		HandleMovement (horizontal);

		Flip (horizontal);
	}

	void Start () {
		facingRight = true;
		myRigidbody = GetComponent<Rigidbody2D> ();
		anim = GetComponent <Animator> ();
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
		if (Input.GetKeyDown (KeyCode.Z)) 
		{
			shield.CurrentVal -= 10;
		}
		if (Input.GetKeyDown (KeyCode.L)) 
		{
			shield.CurrentVal += 10;
		}
		HandleAttacks ();
		attack = false;
	}

	public void Awake()
	{
		health.Initialize();
		energy.Initialize();
		shield.Initialize();
	}
}
