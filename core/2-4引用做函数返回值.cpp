#include<iostream>

using namespace std;

// ���� �����ǿ�����Ϊ�����ķ���ֵ���ڵ�
// ע�� ��Ҫ���ؾֲ����������� 
// �÷�����������Ϊ��ֵ

int& test01()
{
	// ֻ������һ�Σ�����ôд
	int a = 10;
	return a;
}


int& test02()
{
	static int a = 10;
	return a;
}


// *******************ָ��ı���*************
void func(int& ref)
{
	ref = 100;
}

int main24()
{
	int& ref = test01();
	cout << "ref = " << ref << endl;

	// �����ֲ��������������� static
	int& ref1 = test02();
	cout << "ref1 = " << ref1 << endl;
	cout << "ref1 = " << ref1 << endl;
	test02() = 1000;
	cout << "ref1 = " << ref1 << endl;
	cout << "ref1 = " << ref1 << endl;

	// **********************���õı���***************
	cout << "**********************���õı���***************" << endl;
	int a = 10;
	// �Զ�תΪ int* const ref = &a; ָ�볣����ָ���ָ�򲻿����޸ģ�
	int& reff = a;
	reff = 20;
	cout << "a = " << a << endl;
	cout << "reff = " << reff << endl;

	func(a);

	system("pause");
	return 0;
}
