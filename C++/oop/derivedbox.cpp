#include <iostream>

using namespace std;

class Box
{
protected:
	double width;
};

class SmallBox:Box //Smallbox is the derived class
{
public:
	void setSmallWidth(double wid);
	double getSmallWidth();
};

void SmallBox::setSmallWidth(double wid)
{
	width = wid;
}

double SmallBox::getSmallWidth()
{
	return width;
}

int main()
{
	SmallBox box;

	//set box width using member function
	box.setSmallWidth(5.0);
	cout << "Width of box: " << box.getSmallWidth() << endl;

	return 0;
}