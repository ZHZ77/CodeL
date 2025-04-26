//#include<iostream>
//
//using namespace std;
//
//// 1.默认构造函数(无参，函数体为空)
//// 2.默认析构函数（无参，函数体为空）
//// 3.默认拷贝构造函数，对属性进行值拷贝
//
//
//// 如果用户定义有参构造函数，C++不会再提供默认无参构造，但是会提供默认拷贝构造
//// 如果用户定义拷贝构造函数，C++不会再提供其他构造函数
//
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数" << endl;
//	}
//	Person(int a)
//	{
//		cout << "Person的有参构造函数" << endl;
//	}
//	Person(const Person& a)
//	{
//		// 可以不用在成员函数中写拷贝构造函数， 程序会帮我们实现 直接调用 Person p3(p2); Person p4 = Person(p2);
//		cout << "Person的拷贝构造函数" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person的析构函数" << endl;
//	}
//};
//
//
//
//
//int main1213()
//{
//
//	system("pause");
//	return 0;
//}