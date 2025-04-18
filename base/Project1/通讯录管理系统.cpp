#include<iostream>


using namespace std;

#define MAX 1000


struct Person {

	string m_name;	// 姓名
	int m_sex;		// 性别
	int m_age;
	string m_phone;	// 电话
	string m_addr;	// 住址

};

struct Addressbooks
{
	// 通讯录中联系人数组
	struct Person personArray[MAX];
	int m_size;		// 当前记录的联系人个数
};




void showMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1、添加联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 0、退出通讯录 *****" << endl;
	cout << "*************************" << endl;
}

void addPerson(struct Addressbooks * abs)
{
	// 添加联系人
	if (abs->m_size == MAX)
	{
		cout << "通讯录已满，无法添加联系人" << endl;
		return;
	}
	else
	{
		cout << "请输入联系人姓名：" << endl;
		string name;
		cin >> name;
		abs->personArray[abs->m_size].m_name = name;

		cout << "请输入联系人性别：" << endl;
		cout << "1------男" << endl;
		cout << "2------女" << endl;
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
				cout << "输入有误，请重新输入" << endl;
			}
		}

		cout << "请输入年龄：" << endl;
		int age;
		cin >> age;
		abs->personArray[abs->m_size].m_age = age;

		cout << "请输入联系人电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_size].m_phone = phone;

		cout << "请输入联系人住址：" << endl;
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
		cout << "当前没有联系人" << endl;
	}
	else
	{	
		for (int i = 0; i < abs.m_size; i++)
		{
			cout << "姓名：" << abs.personArray[i].m_name << "\t" <<
				"性别：" << (abs.personArray[i].m_sex == 1 ? "男" : "女") << "\t" <<
				"年龄：" << abs.personArray[i].m_age << "\t" <<
				"电话：" << abs.personArray[i].m_phone << "\t" <<
				"家庭住址：" << abs.personArray[i].m_addr << endl;
		}

	}

}

// 检测联系人是否存在，如果存在返回索引，不存在返回-1

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
	
	cout << "请输入要删除的联系人的名字" << endl;
	string name;
	cin >> name;

	int status = isExist(abs, name);
	if (status == -1)
	{
		cout << "查无此人" << endl;

	}
	else
	{
		// 删除对应的联系人
		for (int i = status; i < abs->m_size; i++) 
		{
			abs->personArray[i] = abs->personArray[i + 1];

		}
		abs->m_size -= 1;
		cout << "删除成功！" << endl;
	}


}


void findPerson(struct Addressbooks* abs)
{

	cout << "请输入要查找的联系人的名字" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;

	}
	else
	{
		// 打印对应的联系人

		cout << "请输入联系人姓名：" << endl;
		string name;
		cin >> name;
		abs->personArray[ret].m_name = name;

		cout << "请输入联系人性别：" << endl;
		cout << "1------男" << endl;
		cout << "2------女" << endl;
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
				cout << "输入有误，请重新输入" << endl;
			}
		}

		cout << "请输入年龄：" << endl;
		int age;
		cin >> age;
		abs->personArray[ret].m_age = age;

		cout << "请输入联系人电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_phone = phone;

		cout << "请输入联系人住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_addr = address;

	}


}


void modifyPerson(struct Addressbooks* abs)
{

	cout << "请输入要修改的联系人的名字" << endl;
	string name;
	cin >> name;
	int i = isExist(abs, name);
	if (i == -1)
	{
		cout << "查无此人" << endl;

	}
	else
	{
		// 修改联系人

		cout << "姓名：" << abs->personArray[i].m_name << "\t" <<
			"性别：" << (abs->personArray[i].m_sex == 1 ? "男" : "女") << "\t" <<
			"年龄：" << abs->personArray[i].m_age << "\t" <<
			"电话：" << abs->personArray[i].m_phone << "\t" <<
			"家庭住址：" << abs->personArray[i].m_addr << endl;
	}

}

void clearPerson(struct Addressbooks * abs)
{
	abs->m_size == 0;
	cout << "通讯录已清空" << endl;
}


int main()
{
	struct Addressbooks abs;
	// 初始化通讯录中当前人的数量
	abs.m_size = 0;


	
	while (true)
	{
		int select = 0;
		showMenu();
		cin >> select;
		switch (select)
		{
			case 0:
				cout << "欢迎下次使用！" << endl;
				system("pause");
				return 0;
				break;
			case 1:		// 添加联系人
				addPerson(&abs);		// 利用地址传递可以修改实参
				system("pause");
				system("cls");
				break;
			case 2:		// 显示联系人
				showPerson(abs);
				system("pause");
				system("cls");
				break;
			case 3:		// 显示联系人
				deletePerson(&abs);
				system("pause");
				system("cls");
				break;
			case 4:		// 显示联系人
				findPerson(&abs);
				system("pause");
				system("cls");
				break;
			case 5:		// 显示联系人
				modifyPerson(&abs);
				system("pause");
				system("cls");
				break;
			case 6:		// 显示联系人
				clearPerson(&abs);
				system("pause");
				system("cls");
				break;
		}

	}

	return 0;
}






