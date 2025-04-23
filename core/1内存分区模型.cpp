//#include<iostream>
//
//using namespace std;
//
//// 全局变量
//int g_a = 10;
//int g_b = 10;
//
//// const修饰的全局变量 叫全局常量
//const int g_c_a = 10;
//
//
//// 栈区学习
//
//int* func()
//{
//	int a = 10;
//	return &a;
//}
//int* func_new()
//{
//	int* p = new int(20);
//	return p;
//}
//
//int main2()
//{
//
//	// 全局区
//
//	// 全局变量 静态变量 常量
//
//	// 创建普通局部变量
//	int a = 10;
//	int b = 10;
//	cout << "局部变量a的地址为" << int(&a) << endl;
//	cout << "局部变量b的地址为" << int(&b) << endl;
//
//
//	cout << "全局变量g_a的地址为" << int(&g_a) << endl;
//	cout << "全局变量g_b的地址为" << int(&g_b) << endl;
//
//	// 静态变量 在普通变量前面加static，属于静态变量
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "全局变量s_a的地址为" << int(&s_a) << endl;
//	cout << "全局变量s_b的地址为" << int(&s_b) << endl;
//
//
//	// 常量 字符串常量和const修饰的变量
//	// 字符串常量
//	cout << "字符串常量的地址为" << int(&"hello world") << endl;
//	// const 修饰的变量
//	const int c_a = 10;
//	cout << "const修饰的全局变量" << int(&g_c_a) << endl;
//	cout << "const修饰的局部变量" << int(&c_a) << endl;
//
//	cout << "**********************************" << endl;
//	
//	// 栈区数据注意事项 不要返回局部变量的地址
//	int* p = func();
//	cout << *p << endl;
//
//
//	int* p2 = func_new();
//	cout << *p2 << endl;
//	cout << *p2 << endl;
//	cout << *p2 << endl;
//
//
//
//
//
//	return 0;
//}
//
//
