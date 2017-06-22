using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GoToScene : MonoBehaviour {

	public void GoToMainScene(){
		Application.LoadLevel ("MainScene");	
	}
	public void GoToGameScene(){
		Application.LoadLevel ("GameScene");	
	}
	public void GoToChooseBookScene(){
		Application.LoadLevel ("ChooseBook");	
	}

}
