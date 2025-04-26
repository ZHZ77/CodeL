//#include<iostream>
//
//using namespace std;
//
//
//// 深拷贝与浅拷贝
//
//class Person {
//
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}
//	Person(int age, int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	// 自己实现一个拷贝构造函数解决浅拷贝的问题
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		// m_Height = p.m_Height;		编译器自己实现的方式 浅拷贝
//		m_Height = new int(*p.m_Height);
//
//	}
//	~Person()
//	{
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "~Person的函数调用" << endl;
//	}
//
//	int m_Age;
//	int* m_Height;
//
//};
//
//
//
//void test01()
//{
//	Person p1(18, 185);
//	cout << "p1的年龄为" << p1.m_Age << endl;
//	Person p2(p1);
//	cout << "p2的年龄为" << p2.m_Age << endl;
//}
//
//int main424()
//{
//	test01();
//	system("pause");
//	return 0;
//}
