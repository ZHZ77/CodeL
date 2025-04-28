// 文件名：03递增运算符重载
// 创建时间：2025/4/28 13:51:00

//#include <iostream>
//
//using namespace std;
//
///*
//	递增运算符重载 ++
//	
//*/
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger():m_Num(0){}
//	// 重载前置++运算符
//	MyInteger& operator++()		// 返回引用是为了在一个数字上进行++
//	{
//		m_Num++;
//		return *this;
//	}
//	// 重载后置++运算符
//	// void operator++(int) int代表占位参数，可以用于区分前置和后置递增
//	MyInteger operator++(int)
//	{
//		// 先 记录当时结果
//		// 后 递增
//		// 最后将记录结果做返回
//		MyInteger temp = *this;
//		m_Num++;
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream& cout,  MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//	cout << ++myint << endl;
//
//}
//void test02()
//{
//	MyInteger myint;
//	cout << myint++;
//	cout << myint;
//
//}
//
//int main()
//{
//
//	test02();
//	system("pause");
//	return 0;
//}
