using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class LoadingScript : MonoBehaviour {


	private GameObject loadingbar;
	private GameObject image;

	// Use this for initialization
	void Start () {
		loadingbar = GameObject.Find("loadingbar");
//		image = loadingbar.GetComponent<Image>();
	}
	
	// Update is called once per frame
	void Update () {
		if (loadingbar.GetComponent<Image>().fillAmount < 1.0f) {
			loadingbar.GetComponent<Image>().fillAmount += 0.005f;
			Debug.Log(loadingbar.GetComponent<Image>().fillAmount);
			Application.LoadLevel ("MainScene");
		}

	}
}
