
/*
	�ڳ�Ա�����ͳ�Ա�����Ƿֿ��洢��
	ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ����˵���ͬ���͵Ķ���Թ���һ�����
	���⣺��һ���������������ĸ���������Լ�����

	A��thisָ��ָ�򱻵��õĳ�Ա���������Ķ���

	thisָ�����;
	1�����βκͳ�Ա����ͬ��ʱ��������thisָ��������
	2������ķǾ�̬��Ա�����з��ض�������ʹ��return*this
*/


#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	int age;
};


void test01()
{
	Person p(18);
	cout << "p������Ϊ" << p.age << endl;
}


int main()
{

	system("pause");
	return 0;
}

