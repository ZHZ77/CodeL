

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
	// 1、定义指针
	int a = 10;
	// 指针定义的语法： 数据类型 * 指针变量名；
	int *p;
	// 让指针记录变量a的地址
	p = &a;

	cout << "a的地址为" << p << endl;

	// 2、使用指针
	// 可以通过解引用的方式来找到指针指向的内存
	// 指针前加一个*号


	// 指针和数组
	// 利用指针访问数组中的元素
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