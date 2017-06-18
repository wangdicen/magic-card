using UnityEngine;
using System.Collections;
using DragonBones;

public class HelloDragonBones : MonoBehaviour {

	// Use this for initialization
	void Start () {

//		UnityFactory.factory.LoadDragonBonesData("Animation/LoadingImage_ske");
//		UnityFactory.factory.LoadTextureAtlasData("Animation/LoadingImage_tex");
//
//		var armatureComponent = UnityFactory.factory.BuildArmatureComponent("Armature");
//		armatureComponent.animation.Play("newAnimation");
//
//		// Set position.
//		armatureComponent.transform.localPosition = new Vector3(-1.0f, 0.0f, 30.0f);
//		armatureComponent.transform.localScale = new Vector3 (1.8f, 1.8f,1.8f);
//
//
//		// Set flip.
//		armatureComponent.armature.flipX = true;
	

	}


	public void showLoadingAnimation()
	{
		UnityFactory.factory.LoadDragonBonesData("Animation/LoadingImage_ske");
		UnityFactory.factory.LoadTextureAtlasData("Animation/LoadingImage_tex");

		var armatureComponent = UnityFactory.factory.BuildArmatureComponent("Armature");
		armatureComponent.animation.Play("newAnimation");

		// Set position.
		armatureComponent.transform.localPosition = new Vector3(1.7f, 0.0f, 30.0f);
		armatureComponent.transform.localScale = new Vector3 (1.8f, 1.8f,1.8f);
		armatureComponent.transform.localRotation = new Quaternion(0.0f,180.0f,0.0f,0.0f);
		// Set flip.
		armatureComponent.armature.flipX = true;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
