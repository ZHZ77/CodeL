// 文件名：04赋值运算符重载
// 创建时间：2025/4/28 14:48:26

#include <iostream>

using namespace std;

/*
	
*/

//class Person
//{
//public:
//	Person(int age):m_Age(new int (age)){}
//	
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	Person& operator=(Person& p)
//	{
//		// 编译器是提供浅拷贝
//		//m_Age = p.m_Age;
//
//		// 应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		// 深拷贝
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//
//	int* m_Age;
//};
//
//void test01()
//{
//
//	Person p1(18);
//	Person p2(20);
//	Person p3(220);
//	p2 = p1 = p3;		// 赋值操作
//	cout << "P1的年龄为" << *p1.m_Age << endl;
//	cout << "P2的年龄为" << *p2.m_Age << endl;
//	cout << "P3的年龄为" << *p3.m_Age << endl;
//
//}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
