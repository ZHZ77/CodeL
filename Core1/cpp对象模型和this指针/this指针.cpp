
/*
	在成员变量和成员函数是分开存储的
	每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象对公用一块代码
	问题：这一块代码是如何区分哪个对象调用自己的呢

	A：this指针指向被调用的成员函数所属的对象

	this指针的用途
	1、当形参和成员变量同名时，可以用this指针来区分
	2、在类的非静态成员函数中返回对象本身，可使用return*this
*/


#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	int age;
};


void test01()
{
	Person p(18);
	cout << "p的年龄为" << p.age << endl;
}


int main()
{

	system("pause");
	return 0;
}

