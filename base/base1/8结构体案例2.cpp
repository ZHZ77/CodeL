//#include<iostream>
//
//
//using namespace std;
//
//
//struct hero {
//	string name;
//	int age;
//	string sex;
//
//};
//
//
//
//void bubble(hero *harr, int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			if (harr[j].age > harr[j + 1].age)
//			{
//				struct hero temp = harr[j];
//				harr[j] = harr[j + 1];
//				harr[j + 1] = temp;
//
//			}
//		}
//	}
//
//}
//
//
//void print(hero arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i].name << arr[i].age << arr[i].sex << endl;
//	}
//
//}
//
//
//int main()
//{
//
//	hero harr[5] = {
//		{"����",23,"��"},
//		{"����",22,"��"},
//		{"�ŷ�",20,"��"},
//		{"����",21,"��"},
//		{"����",19,"Ů"}
//	};
//
//	int len = sizeof(harr) / sizeof(harr[0]);
//
//
//	print(harr, len);
//	bubble(harr, len);
//	cout << "������" << endl;
//	print(harr, len);
//
//
//	system("pause");
//	return 0;
//}
//
