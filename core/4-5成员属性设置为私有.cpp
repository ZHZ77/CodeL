#include<iostream>

using namespace std;

// 成员属性设置为私有
// 1、可以自己控制读写权限
// 2、对于写权限可以检测数据有效性

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
	string m_name;		// 姓名 可读可写
	int m_age = 18;		// 年龄	只读			也可以写(年龄必须在0-150之间)
	string m_idol;		// 偶像	只写

};


int main45()
{
	Person p;
	// 姓名设置
	p.setName("张三");
	cout << p.getName() << endl;


	// 年龄设置		这里还是有问题

	cout << "获取年龄：" << p.getAge() << endl;




	system("pause");
	return 0;
}

