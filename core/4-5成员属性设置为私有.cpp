#include<iostream>

using namespace std;

// ��Ա��������Ϊ˽��
// 1�������Լ����ƶ�дȨ��
// 2������дȨ�޿��Լ��������Ч��

class Person 
{

public:
	void setName(string name)
	{
		m_name = name;
	}
	string getName()
	{
		return m_name;
	}

	int getAge()
	{
		return m_age;
	}

	void setidol(string idol)
	{
		m_idol = idol;
	}



private:
	string m_name;		// ���� �ɶ���д
	int m_age = 18;		// ����	ֻ��			Ҳ����д(���������0-150֮��)
	string m_idol;		// ż��	ֻд

};


int main45()
{
	Person p;
	// ��������
	p.setName("����");
	cout << p.getName() << endl;


	// ��������		���ﻹ��������

	cout << "��ȡ���䣺" << p.getAge() << endl;




	system("pause");
	return 0;
}

