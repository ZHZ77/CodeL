//#include<iostream>
//
//using namespace std;
//
//
//// �����ǳ����
//
//class Person {
//
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age, int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person���вι��캯������" << endl;
//	}
//	// �Լ�ʵ��һ���������캯�����ǳ����������
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		// m_Height = p.m_Height;		�������Լ�ʵ�ֵķ�ʽ ǳ����
//		m_Height = new int(*p.m_Height);
//
//	}
//	~Person()
//	{
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "~Person�ĺ�������" << endl;
//	}
//
//	int m_Age;
//	int* m_Height;
//
//};
//
//
//
//void test01()
//{
//	Person p1(18, 185);
//	cout << "p1������Ϊ" << p1.m_Age << endl;
//	Person p2(p1);
//	cout << "p2������Ϊ" << p2.m_Age << endl;
//}
//
//int main424()
//{
//	test01();
//	system("pause");
//	return 0;
//}
