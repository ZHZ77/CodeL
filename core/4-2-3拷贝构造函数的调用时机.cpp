//#include<iostream>
//
//using namespace std;
//
//
//// �������캯������ʱ��
//// 1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//// 2��ֵ���ݵķ�ʽ������������ֵ
//// 3����ֵ��ʽ���ؾֲ�����
//
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯��" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person���вι��캯��" << endl;
//		m_Age = age;
//	}
//	Person(const Person& p)
//	{
//		cout << "Person�Ŀ������캯��" << endl;
//		m_Age = p.m_Age;
//	}
//
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//
//	int m_Age = 0;
//
//};
//
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	// 2��ֵ���ݵķ�ʽ������������ֵ
//	Person p;
//	doWork(p);
//}
//
//void test01()
//{
//	// 1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���    ��õ�ʹ��ʱ��
//	Person p1(10);	// ���ŷ�
//	Person p2(p1);
//	cout << "P2������Ϊ��" << p2.m_Age << endl;
//
//}
//
//
//Person test03()
//{
//	// 3����ֵ��ʽ���ؾֲ�����
//	Person p1;
//	return p1;
//}
//
//int main()
//{
//	test03();
//
//
//	system("pause");
//	return 0;
//}