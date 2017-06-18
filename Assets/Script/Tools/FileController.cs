using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.IO;


public class FileController : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
		CSV.GetInstance ().loadFile(Application.dataPath +"/Resources","csvdemo.csv");
		foreach(string[] i in CSV.GetInstance().m_ArraryData) {
			
			foreach(string j in i)
				Debug.Log (j);
		}

		Debug.Log ("getString" + CSV.GetInstance ().getString (1, 1));
		Debug.Log ("getInt" + CSV.GetInstance ().getInt(1,2));


	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
//首先我们在Start函数中，通过CSV的实例调用loadFile方法来读取我们的myTest里面的内容，
//loadFile方法有两个参数，一个是路径名，一个是文件名称，关于路径名的一些注意事项，
//会在后面的扩展阅读里面介绍，这里只要理解我们通过路径名+文件名就可以指定需要读取的文件了
//然后我通过for循环，将m_ArrayData里所有的内容打印在程序后台中


//+++++++++++++++++++
//首先读取文件的语句和之前一样
//接着我们调用getString方法打印行数为1，列数为1的数据
//最后我们调用getInt方法打印行数为1，列数2的数据