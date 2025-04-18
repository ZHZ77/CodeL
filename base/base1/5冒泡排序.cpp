//#include<iostream>
//
//
//using namespace std;
//
//
//int main()
//{
//
//	int arr[5] = {300, 350, 200, 400, 250};
//	int len = sizeof(arr)/sizeof(int);
//	int temp = 0;
//
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			int tem = 0;
//			if (arr[j] < arr[j + 1])
//			{
//				tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//
//	}
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}
//
