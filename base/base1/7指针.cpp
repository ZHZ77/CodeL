

#include<iostream>
using namespace std;


void bubblesort(int* p, int size)
{

	for (int i = 0; i < size; i++)
	{

		for (int j = 0; j < size-1-i; j++)
		{
			if (p[j + 1] < p[j])
			{
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}


	}


}


int main7()
{
	// 1������ָ��
	int a = 10;
	// ָ�붨����﷨�� �������� * ָ���������
	int *p;
	// ��ָ���¼����a�ĵ�ַ
	p = &a;

	cout << "a�ĵ�ַΪ" << p << endl;

	// 2��ʹ��ָ��
	// ����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	// ָ��ǰ��һ��*��


	// ָ�������
	// ����ָ����������е�Ԫ��
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr1[10] = { 5, 9, 3, 7, 1, 6, 4, 8, 2, 10 };
	p = arr;
	cout << p[5] << endl;


	int size = sizeof(arr1) / sizeof(arr1[0]);
	bubblesort(arr1, size);

	for (int i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++)
	{
		cout << arr1[i] << endl;
		
	}




	system("pause");
	return 0;

}