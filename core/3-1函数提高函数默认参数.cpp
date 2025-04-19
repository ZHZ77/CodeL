#include<iostream>

using namespace std;
// 函数的默认参数
int func(int a, int b, int c)
{
	return a + b + c;
}


// ------------------------函数占位参数----------------------
void func1(int a, int)
{
	cout << "this is func1" << endl;
} 


int main31()
{
	cout << func(10, 20, 30) << endl;


	func1(1, 1);
	system("pause");
	return 0;
}
