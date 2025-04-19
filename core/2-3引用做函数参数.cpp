#include<iostream>

using namespace std;


// 1 值传递
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

// 2.地址传递
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 3.引用传递
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}



int main23()
{
	int a = 10;
	int b = 20;
	mySwap01(a, b);
	cout << "值传递a = " << a << endl;
	cout << "值传递b = " << b << endl;

	mySwap02(&a, &b);
	cout << "地址传递a = " << a << endl;
	cout << "地址传递b = " << b << endl;


	mySwap03(a, b);
	cout << "引用传递a = " << a << endl;
	cout << "引用传递b = " << b << endl;

	system("pause");
	return 0;
}
