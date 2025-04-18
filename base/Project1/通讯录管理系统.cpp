#include<iostream>


using namespace std;

#define MAX 1000


struct Person {

	string m_name;	// ����
	int m_sex;		// �Ա�
	int m_age;
	string m_phone;	// �绰
	string m_addr;	// סַ

};

struct Addressbooks
{
	// ͨѶ¼����ϵ������
	struct Person personArray[MAX];
	int m_size;		// ��ǰ��¼����ϵ�˸���
};




void showMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;
}

void addPerson(struct Addressbooks * abs)
{
	// �����ϵ��
	if (abs->m_size == MAX)
	{
		cout << "ͨѶ¼�������޷������ϵ��" << endl;
		return;
	}
	else
	{
		cout << "��������ϵ��������" << endl;
		string name;
		cin >> name;
		abs->personArray[abs->m_size].m_name = name;

		cout << "��������ϵ���Ա�" << endl;
		cout << "1------��" << endl;
		cout << "2------Ů" << endl;
		int sex;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_size].m_sex = sex;
				break;
			}
			else
			{
				cout << "������������������" << endl;
			}
		}

		cout << "���������䣺" << endl;
		int age;
		cin >> age;
		abs->personArray[abs->m_size].m_age = age;

		cout << "��������ϵ�˵绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_size].m_phone = phone;

		cout << "��������ϵ��סַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_size].m_addr = address;

		abs->m_size++;
	}

}


void showPerson(struct Addressbooks abs)
{
	if (abs.m_size == 0)
	{
		cout << "��ǰû����ϵ��" << endl;
	}
	else
	{	
		for (int i = 0; i < abs.m_size; i++)
		{
			cout << "������" << abs.personArray[i].m_name << "\t" <<
				"�Ա�" << (abs.personArray[i].m_sex == 1 ? "��" : "Ů") << "\t" <<
				"���䣺" << abs.personArray[i].m_age << "\t" <<
				"�绰��" << abs.personArray[i].m_phone << "\t" <<
				"��ͥסַ��" << abs.personArray[i].m_addr << endl;
		}

	}

}

// �����ϵ���Ƿ���ڣ�������ڷ��������������ڷ���-1

int isExist(struct Addressbooks * abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].m_name == name)
		{
			return i;
		}
	}

	return -1;
	
}



void deletePerson(struct Addressbooks* abs)
{
	
	cout << "������Ҫɾ������ϵ�˵�����" << endl;
	string name;
	cin >> name;

	int status = isExist(abs, name);
	if (status == -1)
	{
		cout << "���޴���" << endl;

	}
	else
	{
		// ɾ����Ӧ����ϵ��
		for (int i = status; i < abs->m_size; i++) 
		{
			abs->personArray[i] = abs->personArray[i + 1];

		}
		abs->m_size -= 1;
		cout << "ɾ���ɹ���" << endl;
	}


}


void findPerson(struct Addressbooks* abs)
{

	cout << "������Ҫ���ҵ���ϵ�˵�����" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;

	}
	else
	{
		// ��ӡ��Ӧ����ϵ��

		cout << "��������ϵ��������" << endl;
		string name;
		cin >> name;
		abs->personArray[ret].m_name = name;

		cout << "��������ϵ���Ա�" << endl;
		cout << "1------��" << endl;
		cout << "2------Ů" << endl;
		int sex;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_sex = sex;
				break;
			}
			else
			{
				cout << "������������������" << endl;
			}
		}

		cout << "���������䣺" << endl;
		int age;
		cin >> age;
		abs->personArray[ret].m_age = age;

		cout << "��������ϵ�˵绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_phone = phone;

		cout << "��������ϵ��סַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_addr = address;

	}


}


void modifyPerson(struct Addressbooks* abs)
{

	cout << "������Ҫ�޸ĵ���ϵ�˵�����" << endl;
	string name;
	cin >> name;
	int i = isExist(abs, name);
	if (i == -1)
	{
		cout << "���޴���" << endl;

	}
	else
	{
		// �޸���ϵ��

		cout << "������" << abs->personArray[i].m_name << "\t" <<
			"�Ա�" << (abs->personArray[i].m_sex == 1 ? "��" : "Ů") << "\t" <<
			"���䣺" << abs->personArray[i].m_age << "\t" <<
			"�绰��" << abs->personArray[i].m_phone << "\t" <<
			"��ͥסַ��" << abs->personArray[i].m_addr << endl;
	}

}

void clearPerson(struct Addressbooks * abs)
{
	abs->m_size == 0;
	cout << "ͨѶ¼�����" << endl;
}


int main()
{
	struct Addressbooks abs;
	// ��ʼ��ͨѶ¼�е�ǰ�˵�����
	abs.m_size = 0;


	
	while (true)
	{
		int select = 0;
		showMenu();
		cin >> select;
		switch (select)
		{
			case 0:
				cout << "��ӭ�´�ʹ�ã�" << endl;
				system("pause");
				return 0;
				break;
			case 1:		// �����ϵ��
				addPerson(&abs);		// ���õ�ַ���ݿ����޸�ʵ��
				system("pause");
				system("cls");
				break;
			case 2:		// ��ʾ��ϵ��
				showPerson(abs);
				system("pause");
				system("cls");
				break;
			case 3:		// ��ʾ��ϵ��
				deletePerson(&abs);
				system("pause");
				system("cls");
				break;
			case 4:		// ��ʾ��ϵ��
				findPerson(&abs);
				system("pause");
				system("cls");
				break;
			case 5:		// ��ʾ��ϵ��
				modifyPerson(&abs);
				system("pause");
				system("cls");
				break;
			case 6:		// ��ʾ��ϵ��
				clearPerson(&abs);
				system("pause");
				system("cls");
				break;
		}

	}

	return 0;
}






