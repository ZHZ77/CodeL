#include<iostream>

using namespace std;
// ��̬��Ա����
class Person
{
public:
	// ���ж��󶼹�����һ������
	// ����׶ξͷ����ڴ�
	// �������� �����ʼ��
	static int m_A;

	static void func()
	{

		cout << "static void func ����" << endl;
	}


};

// �����ʼ��
int Person::m_A = 10;

void test01()
{
	Person p1;
	cout << p1.m_A << endl;;

	Person p2;
	p2.m_A = 200;
	cout << p1.m_A << endl;;
}

void test02()
{

	// ��̬��Ա�����ķ��ʷ�ʽ
	// 1�����Ա����
	Person p1;
	p1.m_A = 2002;
	// 2����������
	Person::m_A = 1000;

}


void test03()
{

	// ��̬��Ա�����ķ��ʷ�ʽ
	// 1�����Ա����
	Person p1;
	p1.func();
	// 2����������
	Person::func();


}







int main()
{
	
	test01();
	test02();
	test03();

	system("pause");
	return 0;
}
