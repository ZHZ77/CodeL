#include<iostream>

using namespace std;
// 静态成员变量
class Person
{
public:
	// 所有对象都共享这一份数据
	// 编译阶段就分配内存
	// 类内声明 类外初始化
	static int m_A;

	static void func()
	{

		cout << "static void func 调用" << endl;
	}


};

// 类外初始化
int Person::m_A = 10;

void test01()
{
	Person p1;
	cout << p1.m_A << endl;;

	Person p2;
	p2.m_A = 200;
	cout << p1.m_A << endl;;
}

void test02()
{

	// 静态成员变量的访问方式
	// 1、类成员访问
	Person p1;
	p1.m_A = 2002;
	// 2、类名访问
	Person::m_A = 1000;

}


void test03()
{

	// 静态成员函数的访问方式
	// 1、类成员访问
	Person p1;
	p1.func();
	// 2、类名访问
	Person::func();


}







int main()
{
	
	test01();
	test02();
	test03();

	system("pause");
	return 0;
}
