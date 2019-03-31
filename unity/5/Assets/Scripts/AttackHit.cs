using System.Collections;
using UnityEngine;

public class AttackHit : MonoBehaviour {
	public float damageToGive;

	void onTriggerEnter2D(Collider2D other){
		if (other.tag == "Enemy") {
			other.GetComponent<EnemyHealth> ().addDamage (damageToGive);
			Debug.Log ("Hit");
		}
	}
}
