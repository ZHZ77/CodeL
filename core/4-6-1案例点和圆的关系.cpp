#include<iostream>
#include"point.h"
#include"circle.h"
using namespace std;

// 判断点和圆的关系
void isInCircle(Circle &c, Point &p)
{
	int distance =
		(c.getCenter().get_X() - p.get_X()) * (c.getCenter().get_X() - p.get_X()) +
		(c.getCenter().get_Y() - p.get_Y()) * (c.getCenter().get_Y() - p.get_Y());
	int rDistance = c.getR() * c.getR();

	// 判断关系
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else if(distance < rDistance)
	{
		cout << "点在圆内" << endl;
	}


}


int main()
{

	// 创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.set_X(10);
	center.set_Y(0);
	c.setCenter(center);

	// 创建点
	Point p;
	p.set_X(10);
	p.set_Y(10);
	// 判断关系

	isInCircle(c, p);

	system("pause");
	return 0;
}

