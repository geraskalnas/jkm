using System.Collections;
using UnityEngine;

public class EnemyHealth : MonoBehaviour {
	public float enemyMaxHealth;
	public float currentHealth;
	// Use this for initialization
	void Start () {
		currentHealth = enemyMaxHealth;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void addDamage(float dmg){
		currentHealth -= dmg;
		if (currentHealth <= 0) {
			Died ();
		}
	}

	void Died(){
		Destroy (gameObject);
	}
}
