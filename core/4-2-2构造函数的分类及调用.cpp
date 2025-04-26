//#include<iostream>
//
//
//using namespace std;
//
//
//// 构造函数的分类及调用
//// 分类	
////		按照参数分类		无参构造（默认构造）和有参构造
////		按照类型分类		普通构造	拷贝构造
//// 
////
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "构造函数的默认调用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "构造函数的有参调用" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "构造函数的拷贝调用" << endl;
//	}
//
//	~Person()	// 不可以有参数
//	{
//		//cout << "析构函数的调用" << endl;
//	}
//
//private:
//	int age;
//
//};
//
//void test01()
//{
//	// 调用
//	// 1、括号法
//	//Person p1;	// 默认构造函数调用
//	//Person p2(10);	// 有参构造函数调用
//	//Person p3(p1);	// 拷贝构造函数调用
//
//	// 注意事项
//	// 1.调用默认构造函数的时候，不要加（）
//	// 因为加（）编译器会认为这是函数的声明 void func();		返回值 函数名（）；
//	// 2.不要利用拷贝构造函数 初始化匿名对象    Person(p3)  ===== Person p3; 对象声明
//	
//	//2、显示法
//	Person p1;				// 默认构造函数调用
//	Person p2 = Person(10);	// 有参构造函数调用
//	Person p3 = Person(p2);
//
//	Person(10);		// 匿名函数对象	特点：当前行执行结束后，系统立即回收匿名对象
//
//	// 3、隐式法
//	Person p4 = 10;		// 相当于 Person p4 = Person(10);
//	Person p5 = p4;		// 拷贝构造	
//
//
//
//}
//
//
//int main()
//{
//
//	test01();
//
//
//	system("pause");
//	return 0;
//}
//
//
//
