using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;


public class ScrollThreeView : MonoBehaviour,IBeginDragHandler,IEndDragHandler {

	private ScrollRect scrollRect;
	private float[] levelArray = new float[]{ 0f, 0.5f, 1.0f };
	private float targetHorizontalPosition = 0.5f;
	float smothing = 8;
	bool isDrag = false;

	// Use this for initialization
	void Start () {
		scrollRect = GetComponent<ScrollRect> ();
	}

	public void OnEndDrag(PointerEventData eventData)
	{
		float horizontalPosX = scrollRect.horizontalNormalizedPosition;
		int index = 0;
		float offset = Mathf.Abs (levelArray [index] - horizontalPosX);
		for (int i = 1; i < levelArray.Length; i++) {
			float offsetTemp = Mathf.Abs (levelArray [i] - horizontalPosX);
			if (offsetTemp < offset) {
				index = i;
				offset = offsetTemp;
			}
		}
//		scrollRect.horizontalNormalizedPosition = levelArray [index];
		targetHorizontalPosition = levelArray [index];
		isDrag = false;
	}

	public void OnBeginDrag(PointerEventData eventData)
	{
		isDrag = true;
	}

	// Update is called once per frame
	void Update () {
		if (isDrag == false) {
			scrollRect.horizontalNormalizedPosition = Mathf.Lerp (scrollRect.horizontalNormalizedPosition,
				targetHorizontalPosition,
				Time.deltaTime * smothing);
		}
	}
}
