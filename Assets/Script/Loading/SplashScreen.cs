using BasicScript;
using UnityEngine;
using UnityEngine.UI;

using UnityEngine.SceneManagement;

/// <summary>
/// Author: NicolasTse
/// Email: xiehaojiejob@qq.com
/// </summary>
namespace BasicScript.Component {

    public class SplashScreen : MonoBehaviour {
    
        public Image splashImg;
        public Image splashImg2;
        private float alpha = 0;
        private int stage = 0;
        private float waitTime = 0.5f;

        void Start() {
        }

        void Update() {
            if (stage == 0) {
                alpha += 0.02f;
                if (alpha > 1.5f) {
                    stage = 1;
                    alpha = 1;
                }
                splashImg.color = new Color(splashImg.color.r, splashImg.color.g, splashImg.color.b, alpha);
            } else if (stage == 1) {
                alpha -= 0.02f;
                if (alpha < 0) {
                    stage = 2;
                    alpha = 0;

//					Application.LoadLevel("Game");    
              
                }
                splashImg.color = new Color(splashImg.color.r, splashImg.color.g, splashImg.color.b, alpha);
            } else if (stage == 2) { 
                if (waitTime > 0) {
                    waitTime -= Time.deltaTime;
                } else {
                    stage = 3;
                }
            } else if (stage == 3) {
                alpha += 0.02f;
                if (alpha > 1.5f) {
                    stage = 4;
                    alpha = 1;
                }
                splashImg2.color = new Color(splashImg2.color.r, splashImg2.color.g, splashImg2.color.b, alpha);
            } else if (stage == 4) {
                alpha -= 0.02f;
                if (alpha < 0) {
                    stage = 5;
                    alpha = 0;
					Application.LoadLevel("GameScene");    
                }
                splashImg2.color = new Color(splashImg2.color.r, splashImg2.color.g, splashImg2.color.b, alpha);
            }
        }
    }
}
