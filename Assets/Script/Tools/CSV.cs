using UnityEngine;
using System.Collections;
using System.IO;
using System.Collections.Generic;

public class CSV {

	static CSV csv;
	public List<string[]> m_ArraryData;

	public static CSV GetInstance(){
		if (csv == null) {
			csv = new CSV ();
		}
		return csv;
	}

	private CSV() { m_ArraryData = new List<string[]> ();}


	public string getString(int row,int col)
	{
		return m_ArraryData [row] [col];
	}
	public int getInt(int row, int col)
	{
		return int.Parse (m_ArraryData [row] [col]);
	}


	public void loadFile(string path, string fileName)
	{
		m_ArraryData.Clear ();
		StreamReader sr = null;
		try{
			sr = File.OpenText(path + "//" + fileName);
			Debug.Log("file finded");
		}catch{
			Debug.Log ("file dont finded!");
			return;
		}
		string line;
		while ((line = sr.ReadLine ()) != null) {
			m_ArraryData.Add (line.Split(','));
		}

		sr.Close ();
		sr.Dispose ();
	}
}
//首先，如果我们要使用Unity的读取文件的方法，需要在开头引入System.IO的命名空间，这样编辑器才会识别读取文件的一些方法
//然后我们还需要使用List类型的变量，所以还要引入System.Collections.Generic的命名空间
//然后这个CSV类是我们自己定义的一个静态类，不需要继承MonoBehaviour类，所以我们把继承MonoBehaviour类的语句删除掉
//接着我们定义了csv和m_ArrayData两个成员变量，第一个用来实现单例模式，第二个用来保存从文件读取的内容
//然后使用单例模式来生产这个类的实例，以后需要使用这个类的方法我们就通过GetInstance来获取这个类的实例
//接着我们在构造函数CSV()中，初始化m_ArrayData
//然后我们定义了loadFile方法，有两个参数，第一个是路径名，第二个是文件名，通过路径名+文件名我们就可以指定我需要读取的文件了
//接着看看loadFile这个方法里面到底做了什么事情？首先每次读取文件前，我们清空一下m_ArrayData，以免数据冲突
//然后我们定义了一个StreamReader类型的变量sr，用他来保存文件读取后的最原始的数据
//然后我们使用try{} catch{}语句，来捕获程序异常，这个逻辑和if语句有点想，如果我们文件读取不成功，就会运行catch里面的语句，
//在后他打印一句话来通知我文件没有找到，在try{}里面使用OpenText方法来打开我们的myTest.csv文件
//接着我们定义了一个line，用来临时保存sr里面的每一行数据
//然后使用一个while循环，把sr里面的数据按照一行来切割，全部放入m_ArrayData中
//最后使用close和Dispose函数将sr进行关闭和销毁

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//由于这次我们需要将每一行的数据按照列数来拆解，那么m_ArrayData里面装的元素就不再是string了，而是一个string数值，
//所以我们这边需要修改m_ArrayData的类型为List
//然后我们新增一个方法getString，它有两个参数，row是行数，col是列数，方法返回指定行数和列数的数据，数据类型是string
//同时我们还增加一个方法getInt，它也有两个参数，row是行数，col是列数，方法返回指定行数和列数的数据，数据类型是int，
//所以最后调用了int.Parse方法将string转换成int类型
//最后我们修改while循环中的讲数据添加到m_ArrayData的语句，这里我们调用Split方法，将数据以 “,” 作为分隔符，切割数据