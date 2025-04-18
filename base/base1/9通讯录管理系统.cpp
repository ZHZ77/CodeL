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
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "***********************" << endl;

}


void addperon(book * b)
{
	if (b->size == MAX)
	{
		cout << "通讯录已满" << endl;
		return;
	}
	string name;
	cout << "姓名" << endl;
	cin >> name;
	b->parr[b->size].name = name;

	int sex;
	cout << "性别" << endl;
	cout << "1 --- 男" << endl;
	cout << "2 --- 女" << endl;
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
			cout << "输入有误请重新输入" << endl;
		}

	}

	int age;
	cout << "年龄" << endl;
	cin >> age;
	b->parr[b->size].age = age;

	string num;
	cout << "电话" << endl;
	cin >> num;
	b->parr[b->size].phone = num;

	string address;
	cout << "家庭住址" << endl;
	cin >> address;
	b->parr[b->size].adress = address;

	b->size++;

	

	cout << "添加完成" << endl;
	system("pause");
	system("cls");

}


void showperson(book* abs)
{
	if (abs->size == 0)
	{
		cout << "没人" << endl;
		return;
	}
	// 显示联系人
	for (int i = 0; i < abs->size; i++)
	{
		cout << "姓名：" << abs->parr[i].name << "\t";
		cout << "性别：" << (abs->parr[i].sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->parr[i].age << "\t";
		cout << "电话：" << abs->parr[i].phone << "\t\t";
		cout << "家庭住址：" << abs->parr[i].adress << endl;

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
		cout << "请输入操作 " << endl;
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
			cout << "欢迎下次使用" << endl;
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
