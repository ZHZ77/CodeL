//#include<iostream>
//
//using namespace std;
//
//// ȫ�ֱ���
//int g_a = 10;
//int g_b = 10;
//
//// const���ε�ȫ�ֱ��� ��ȫ�ֳ���
//const int g_c_a = 10;
//
//
//// ջ��ѧϰ
//
//int* func()
//{
//	int a = 10;
//	return &a;
//}
//int* func_new()
//{
//	int* p = new int(20);
//	return p;
//}
//
//int main2()
//{
//
//	// ȫ����
//
//	// ȫ�ֱ��� ��̬���� ����
//
//	// ������ͨ�ֲ�����
//	int a = 10;
//	int b = 10;
//	cout << "�ֲ�����a�ĵ�ַΪ" << int(&a) << endl;
//	cout << "�ֲ�����b�ĵ�ַΪ" << int(&b) << endl;
//
//
//	cout << "ȫ�ֱ���g_a�ĵ�ַΪ" << int(&g_a) << endl;
//	cout << "ȫ�ֱ���g_b�ĵ�ַΪ" << int(&g_b) << endl;
//
//	// ��̬���� ����ͨ����ǰ���static�����ھ�̬����
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "ȫ�ֱ���s_a�ĵ�ַΪ" << int(&s_a) << endl;
//	cout << "ȫ�ֱ���s_b�ĵ�ַΪ" << int(&s_b) << endl;
//
//
//	// ���� �ַ���������const���εı���
//	// �ַ�������
//	cout << "�ַ��������ĵ�ַΪ" << int(&"hello world") << endl;
//	// const ���εı���
//	const int c_a = 10;
//	cout << "const���ε�ȫ�ֱ���" << int(&g_c_a) << endl;
//	cout << "const���εľֲ�����" << int(&c_a) << endl;
//
//	cout << "**********************************" << endl;
//	
//	// ջ������ע������ ��Ҫ���ؾֲ������ĵ�ַ
//	int* p = func();
//	cout << *p << endl;
//
//
//	int* p2 = func_new();
//	cout << *p2 << endl;
//	cout << *p2 << endl;
//	cout << *p2 << endl;
//
//
//
//
//
//	return 0;
//}
//
//
