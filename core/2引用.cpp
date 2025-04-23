//#include<iostream>
//
//
//using namespace std;
//
//
//int main0()
//{
//
//	// *************引用基本语法***********************
//	int a = 10;
//
//	int& b = a;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	b = 100;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	// *************引用注意事项***********************
//
//	int a1 = 10;
//	// 1、引用必须初始化
//	// int& b; 错误，必须要初始化
//	int& b1 = a1;
//
//	int c1 = 20;
//	b1 = c1; // 这是赋值操作，而不是更改引用
//	cout << "a1 = " << a1 << endl;
//	cout << "b1 = " << b1 << endl;
//	cout << "c1 = " << c1 << endl;
//
//
//	system("pause");
//	return 0;
//}
