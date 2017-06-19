using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using DG.Tweening;

public class BlingBling : MonoBehaviour {

	public Image bling;
	// Use this for initialization
	void Start () {
	
		bling.DOFade (0, 1.5f).SetLoops (-1, LoopType.Yoyo); 
	}
}
