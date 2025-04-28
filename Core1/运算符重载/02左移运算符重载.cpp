// 文件名：02左移运算符重载
// 创建时间：2025/4/27 21:04:17

//#include <iostream>
//
//using namespace std;
//
///*
//	左移运算符重载
//
//*/
//
//class Person
//{
//public:
//
//	// 利用成员函数重载，左移运算符
//	// 不会利用成员函数重载左移运算符，因为无法实现cout在左侧
//	//void operator<<(Person& p)
//	//{
//
//	//}
//
//	int m_A;
//	int m_B;
//
//
//};
//
//ostream& operator<<(ostream &cout , Person &p)
//{
//	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
//	return cout;
//}
//
//
//
//void test01()
//{
//	Person p;
//	p.m_A = 10;
//	p.m_B = 20;
//
//
//	cout << p << endl;
//}
//
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}
