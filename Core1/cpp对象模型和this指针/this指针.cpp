//
///*
//	�ڳ�Ա�����ͳ�Ա�����Ƿֿ��洢��
//	ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ����˵���ͬ���͵Ķ���Թ���һ�����
//	���⣺��һ���������������ĸ���������Լ�����
//
//	A��thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//
//	thisָ�����;
//	1�����βκͳ�Ա����ͬ��ʱ��������thisָ��������
//	2������ķǾ�̬��Ա�����з��ض�������ʹ��return*this
//*/
//
//
//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		// thisָ��ָ����Ǳ����õĳ�Ա���������Ķ���
//		this->age = age;
//	}
//
//	void PersonAddAge(Person &p)
//	{
//		this->age += p.age;
//	}
//
//	Person& PersonAddAge2(Person& p)
//	{
//		// this��ָ��  *this���Ǳ���
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
//
//
//void test01()
//{
//	Person p(18);
//	cout << "p������Ϊ" << p.age << endl;
//}
//
//
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	p2.PersonAddAge(p1);
//	p2.PersonAddAge2(p1).PersonAddAge2(p1);
//	cout << p2.age << endl;
//
//
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
