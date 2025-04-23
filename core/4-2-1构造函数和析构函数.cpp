#include<iostream>


using namespace std;


// 构造函数和析构函数
// 
//

class Person1
{
public:
	Person1()
	{
		cout << "构造函数的调用" << endl;
	}


};

void test01()
{
	Person1 p;
}


int main()
{

	test01();


	system("pause");
	return 0;
}



