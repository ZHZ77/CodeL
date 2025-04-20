#include<iostream>


using namespace std;

// 访问权限
// 公共权限 public		成员 类内可以访问		类外可以访问
// 保护权限 protected	成员 类内可以访问		类外不可以访问	儿子可以访问父亲的保护内容
// 私有权限 private		成员 类内可以访问		类外不可以访问	儿子不可以访问父亲的私有内容




class Person {
public:
	// 公共权限
	string m_name;

protected:
	// 保护权限
	string m_car;

private:
	// 私有权限
	int m_password;

public:
	void func()
	{
		m_name = "张是哪";
		m_car = "小汽车";
		m_password = 1231;

	}

};



int main43()
{

	Person p1;
	p1.m_name = "李四";
	//p1.m_car = "大汽车";
	//p1.m_password = 000;		// 这两个都不能访问 因为权限问题




	system("pause");
	return 0;
}

