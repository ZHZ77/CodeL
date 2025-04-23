//#include<iostream>
//
//using namespace std;
//
//const double PI = 3.14;
//
//
//// 设计一个圆类，求圆的周长
//// 圆求周长的公式 ： 2* PI * 半径
//
//class Circle 
//{
//	// 访问权限
//public:
//	
//	// 设计圆的属性
//	int m_r = 10;
//	// 设置圆的行为
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//
//};
//
//
//class Student 
//{
//public:
//
//
//	// 行为
//	void setName(string name)
//	{
//		m_name = name;
//	}
//
//	void setID(int id)
//	{
//		m_id = id;
//	}
//
//	void showStudent()
//	{
//		cout << "学生姓名：" << m_name << endl;
//		cout << "学生学号：" << m_id << endl;
//	}
//private:
//	// 属性
//	string m_name;
//	int m_id;
//};
//
//
//int main41()
//{
//
//	
//	// 通过圆类创建一个具体的圆
//	Circle c1;
//	c1.m_r = 10;
//	cout <<"c1圆的周长为：" << c1.calculateZC() << endl;
//
//	// -------------------学生类---------------------------
//
//	Student s1;
//	s1.setName("张三");
//	s1.setID(123);
//	s1.showStudent();
//
//
//
//	system("pause");
//	return 0;
//}
//
