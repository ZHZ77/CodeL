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
//		{"Áõ±¸",23,"ÄÐ"},
//		{"¹ØÓð",22,"ÄÐ"},
//		{"ÕÅ·É",20,"ÄÐ"},
//		{"ÕÔÔÆ",21,"ÄÐ"},
//		{"õõ²õ",19,"Å®"}
//	};
//
//	int len = sizeof(harr) / sizeof(harr[0]);
//
//
//	print(harr, len);
//	bubble(harr, len);
//	cout << "½»»»ºó" << endl;
//	print(harr, len);
//
//
//	system("pause");
//	return 0;
//}
//
