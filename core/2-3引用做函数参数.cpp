#include<iostream>

using namespace std;


// 1 ֵ����
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

// 2.��ַ����
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 3.���ô���
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
	cout << "ֵ����a = " << a << endl;
	cout << "ֵ����b = " << b << endl;

	mySwap02(&a, &b);
	cout << "��ַ����a = " << a << endl;
	cout << "��ַ����b = " << b << endl;


	mySwap03(a, b);
	cout << "���ô���a = " << a << endl;
	cout << "���ô���b = " << b << endl;

	system("pause");
	return 0;
}
