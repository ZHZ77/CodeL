#include<iostream>

using namespace std;

// 函数重载的注意事项
// 1、引用做为重载条件
void funcc(int& a)		// int &a  = 10;不合法  引用必须要一个合法的内存空间10这不合法
{
	cout << "func(int& a)的调用" << endl;
}

void funcc(const int& a)
{
	cout << "func(const int& a)的调用" << endl;
}

int main34()
{
	int a = 10;
	funcc(a);

	funcc(10);

	system("pause");
	return 0;
}


