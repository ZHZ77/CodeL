//#include<iostream>
//
//using namespace std;
//
//
//// 拷贝构造函数调用时机
//// 1、使用一个已经创建完毕的对象来初始化一个新对象
//// 2、值传递的方式给函数参数传值
//// 3、以值方式返回局部对象
//
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person的有参构造函数" << endl;
//		m_Age = age;
//	}
//	Person(const Person& p)
//	{
//		cout << "Person的拷贝构造函数" << endl;
//		m_Age = p.m_Age;
//	}
//
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	int m_Age = 0;
//
//};
//
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	// 2、值传递的方式给函数参数传值
//	Person p;
//	doWork(p);
//}
//
//void test01()
//{
//	// 1、使用一个已经创建完毕的对象来初始化一个新对象    最常用的使用时机
//	Person p1(10);	// 括号法
//	Person p2(p1);
//	cout << "P2的年龄为：" << p2.m_Age << endl;
//
//}
//
//
//Person test03()
//{
//	// 3、以值方式返回局部对象
//	Person p1;
//	return p1;
//}
//
//int main()
//{
//	test03();
//
//
//	system("pause");
//	return 0;
//}