//#include<iostream>
//
//
//using namespace std;
//
//
//struct Student
//{
//	string name;
//	int score;
//
//};
//
//
//
//struct Teacher
//{
//	string tname;
//	Student arr[5];
//
//};
//
//
//void allocateSpace(Teacher arr[], int len)
//{
//	string namee = "ABCDE";
//
//	for (int i = 0; i < len; i++)
//	{
//		arr[i].tname = "Teacher_";
//		arr[i].tname += namee[i];
//
//		for (int j = 0; j < 5; j++)
//		{
//			arr[i].arr[j].name = "Student_";
//			arr[i].arr[j].name += namee[j];
//			arr[i].arr[j].score = 60;
//		}
//
//	}
//
//}
//
//
//
//void printt(Teacher arr[], int len)
//{
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师姓名：" << arr[i].tname << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "学生姓名：" << arr[i].arr[j].name <<
//				"学生分数： " << arr[i].arr[j].score << endl;
//		}
//	}
//
//}
//
//int main()
//{
//	struct Teacher tarr[3];
//	int len = sizeof(tarr) / sizeof(tarr[0]);
//
//	allocateSpace(tarr, len);
//
//	printt(tarr, len);
//
//
//	system("pause");
//	return 0;
//}










