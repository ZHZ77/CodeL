#include<iostream>

using namespace std;

// 作用 引用是可以作为函数的返回值存在的
// 注意 不要返回局部变量的引用 
// 用法函数调用作为左值

int& test01()
{
	// 只能用这一次，别这么写
	int a = 10;
	return a;
}


int& test02()
{
	static int a = 10;
	return a;
}


// *******************指针的本质*************
void func(int& ref)
{
	ref = 100;
}

int main24()
{
	int& ref = test01();
	cout << "ref = " << ref << endl;

	// 提升局部变量的生命周期 static
	int& ref1 = test02();
	cout << "ref1 = " << ref1 << endl;
	cout << "ref1 = " << ref1 << endl;
	test02() = 1000;
	cout << "ref1 = " << ref1 << endl;
	cout << "ref1 = " << ref1 << endl;

	// **********************引用的本质***************
	cout << "**********************引用的本质***************" << endl;
	int a = 10;
	// 自动转为 int* const ref = &a; 指针常量是指针的指向不可以修改，
	int& reff = a;
	reff = 20;
	cout << "a = " << a << endl;
	cout << "reff = " << reff << endl;

	func(a);

	system("pause");
	return 0;
}
