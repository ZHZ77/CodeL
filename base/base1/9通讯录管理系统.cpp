#include<iostream>
using namespace std;

#define MAX 1000


struct person
{
	string name;
	int sex;
	int age;
	string phone;
	string adress;

};


struct book 
{
	person parr[MAX];
	int size;
};


void menu()
{

	cout << "***********************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "***********************" << endl;

}


void addperon(book * b)
{
	if (b->size == MAX)
	{
		cout << "ͨѶ¼����" << endl;
		return;
	}
	string name;
	cout << "����" << endl;
	cin >> name;
	b->parr[b->size].name = name;

	int sex;
	cout << "�Ա�" << endl;
	cout << "1 --- ��" << endl;
	cout << "2 --- Ů" << endl;
	while (1)
	{
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			b->parr[b->size].sex = sex;
			break;
		}
		else
		{
			cout << "������������������" << endl;
		}

	}

	int age;
	cout << "����" << endl;
	cin >> age;
	b->parr[b->size].age = age;

	string num;
	cout << "�绰" << endl;
	cin >> num;
	b->parr[b->size].phone = num;

	string address;
	cout << "��ͥסַ" << endl;
	cin >> address;
	b->parr[b->size].adress = address;

	b->size++;

	

	cout << "������" << endl;
	system("pause");
	system("cls");

}


void showperson(book* abs)
{
	if (abs->size == 0)
	{
		cout << "û��" << endl;
		return;
	}
	// ��ʾ��ϵ��
	for (int i = 0; i < abs->size; i++)
	{
		cout << "������" << abs->parr[i].name << "\t";
		cout << "�Ա�" << (abs->parr[i].sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->parr[i].age << "\t";
		cout << "�绰��" << abs->parr[i].phone << "\t\t";
		cout << "��ͥסַ��" << abs->parr[i].adress << endl;

	}



}


int main()
{
	int idx = 0;

	book b1;
	b1.size = 0;


	while (1)
	{
		menu();
		cout << "��������� " << endl;
		cin >> idx;

		switch (idx)
		{
		case 1:
			addperon(&b1);
			break;
		case 2:
			showperson(&b1);
			system("pause");
			system("cls");
			break;
		case 3:
			break;		
		case 4:
				break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}

	}
	


	system("pause");
	return 0;

}
