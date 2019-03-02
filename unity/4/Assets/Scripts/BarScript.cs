using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BarScript : MonoBehaviour {
	[SerializeField]
	private float lerpSpeed;
	[SerializeField]
	private float fillAmount;
	public float MaxValue { get; set; }
	public Image content;
	public Text valueText;

	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		handleBar ();
	}

	private void handleBar()
	{
		if (fillAmount != content.fillAmount) {
			content.fillAmount = Mathf.Lerp(content.fillAmount, fillAmount, Time.deltaTime * lerpSpeed);
		}
	}

	private float Map(float value, float inMin, float inMax, float outMin, float outMax)
	{
		return (value - inMin) * (outMax - outMin) / (inMax - inMin) + outMin;
	}

	public float Value
	{
		set {
			string[] tmp = valueText.text.Split (':');
			valueText.text = tmp [0] + ":" + value;
			fillAmount = Map (value, 0, MaxValue, 0, 1);
		}
	}
}
