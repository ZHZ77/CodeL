#include<iostream>

using namespace std;

// �������ص�ע������
// 1��������Ϊ��������
void funcc(int& a)		// int &a  = 10;���Ϸ�  ���ñ���Ҫһ���Ϸ����ڴ�ռ�10�ⲻ�Ϸ�
{
	cout << "func(int& a)�ĵ���" << endl;
}

void funcc(const int& a)
{
	cout << "func(const int& a)�ĵ���" << endl;
}

int main34()
{
	int a = 10;
	funcc(a);

	funcc(10);

	system("pause");
	return 0;
}


