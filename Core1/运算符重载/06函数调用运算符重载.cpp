// 文件名：06函数调用运算符重载
// 创建时间：2025/4/28 19:16:34

#include <iostream>

using namespace std;

/*
	
*/

class MyPrint
{
public:
	void operator()(string txt)
	{
		cout << txt << endl;
	}

};



class MyAdd 
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};


void test01()
{
	MyPrint myprint;
	myprint("Hello world!");		// 由于使用起来非常类似于函数调用，因此称为仿函数
	// myprint是函数名称若当函数来看  但现在是一个对象
}

void test02()
{
	MyAdd myadd;
	int ret = myadd(100, 100);
	cout << "ret = " << ret << endl;
	// 匿名函数对象   数据类型()
	cout << MyAdd()(100, 100) << endl;

}




int main()
{

	test01();
	test02();


	system("pause");
	return 0;
}
