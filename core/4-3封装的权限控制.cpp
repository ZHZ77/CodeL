#include<iostream>


using namespace std;

// ����Ȩ��
// ����Ȩ�� public		��Ա ���ڿ��Է���		������Է���
// ����Ȩ�� protected	��Ա ���ڿ��Է���		���ⲻ���Է���	���ӿ��Է��ʸ��׵ı�������
// ˽��Ȩ�� private		��Ա ���ڿ��Է���		���ⲻ���Է���	���Ӳ����Է��ʸ��׵�˽������




class Person {
public:
	// ����Ȩ��
	string m_name;

protected:
	// ����Ȩ��
	string m_car;

private:
	// ˽��Ȩ��
	int m_password;

public:
	void func()
	{
		m_name = "������";
		m_car = "С����";
		m_password = 1231;

	}

};



int main43()
{

	Person p1;
	p1.m_name = "����";
	//p1.m_car = "������";
	//p1.m_password = 000;		// �����������ܷ��� ��ΪȨ������




	system("pause");
	return 0;
}

