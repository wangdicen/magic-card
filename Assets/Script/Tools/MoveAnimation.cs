using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using DG.Tweening;

public class MoveAnimation : MonoBehaviour {
	
	public Image image;
	// Use this for initialization
	void Start () {
		image.transform.DOLocalMove (new Vector3( 0f, 20f, 0f), 2f).SetRelative().SetLoops(-1,LoopType.Yoyo); 
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
