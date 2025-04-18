#include<iostream>

using namespace std;


struct Stu {
	string sName;
	int score;
};


struct Teacher {

	string Tname;

	struct Stu sArray[5];

};


void allocatespace(struct Teacher tArr[], int len)
{
	string n = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArr[i].Tname = "Teacher_";
		tArr[i].Tname += n[i];

		for (int j = 0; j < 5; j++)
		{
			int score = rand() % 41 + 60;
			tArr[i].sArray[j].sName = "Student_";
			tArr[i].sArray[j].sName += n[j];
			tArr[i].sArray[j].score = score;
		}

	}

}



void printinfo(struct Teacher tArr[], int len)
{

	for (int i = 0; i < len; i++)
	{
		cout << tArr[i].Tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << tArr[i].sArray[j].sName << tArr[i].sArray[j].score << endl;
		}

	}


}


int main1()
{
	srand((unsigned int)time(NULL));


	struct Teacher tArray[3];

	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocatespace(tArray, len);

	printinfo(tArray, len);

	return 0;
}

