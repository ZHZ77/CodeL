#include<iostream>

using namespace std;
// ������Ĭ�ϲ���
int func(int a, int b, int c)
{
	return a + b + c;
}


// ------------------------����ռλ����----------------------
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
