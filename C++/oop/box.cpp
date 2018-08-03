#include <iostream>

using namespace std;

class Box
{
public:
	double length;
	double breadth;
	double height;

	double getVolume(void);
	void setLength(double len);
	void setBreadth(double bre);
	void setHeight(double hei);
};

double Box::getVolume(void)
{
	return length * breadth * height;
}

void Box::setLength(double len)
{
	length = len;
}

void Box::setBreadth(double bre)
{
	breadth = bre;
}

void Box::setHeight(double hei)
{
	height = hei;
}

int main()
{
	Box box1;
	Box box2;

	box1.setLength(5.0);
	box1.setBreadth(6.0);
	box1.setHeight(7.0);

	box2.setLength(10.0);
	box2.setBreadth(12.0);
	box2.setHeight(13.0);

	cout << "Volume of box 1 is " << box1.getVolume() << endl;

	cout << "Volume of box 2 is " << box2.getVolume() << endl;

	return 0;
}