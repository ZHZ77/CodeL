#include<iostream>
#include"point.h"
#include"circle.h"
using namespace std;

// �жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle &c, Point &p)
{
	int distance =
		(c.getCenter().get_X() - p.get_X()) * (c.getCenter().get_X() - p.get_X()) +
		(c.getCenter().get_Y() - p.get_Y()) * (c.getCenter().get_Y() - p.get_Y());
	int rDistance = c.getR() * c.getR();

	// �жϹ�ϵ
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if(distance < rDistance)
	{
		cout << "����Բ��" << endl;
	}


}


int main()
{

	// ����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.set_X(10);
	center.set_Y(0);
	c.setCenter(center);

	// ������
	Point p;
	p.set_X(10);
	p.set_Y(10);
	// �жϹ�ϵ

	isInCircle(c, p);

	system("pause");
	return 0;
}

