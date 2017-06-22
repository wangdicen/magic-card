using UnityEngine;
using System.Collections;
using DG.Tweening;
using UnityEngine.UI;

public class Rotating : MonoBehaviour {
	
	public Image image;

	// Use this for initialization
	void Start () {
		image.transform.DOLocalRotate (new Vector3 (0, 0, 360), 30f, RotateMode.LocalAxisAdd).SetEase (Ease.Linear).SetLoops (-1, LoopType.Restart);
	}
	

}
