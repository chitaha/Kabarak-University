// Use of provate and public

#include <iostream>

using namespace std;

class Box
{
public:
	double length;
	void setWidth(double wid);
	double getWidth();

private:
	double width;
};

void Box::setWidth(double wid)
{
	width = wid;
}

double Box::getWidth()
{
	return width;
}

int main()
{
	Box box;

	// set box length without member functions
	box.length = 10.0;
	cout << "Length of box: " << box.length << endl;

	// set box width without member function
	// box.width = 15.0;
	box.setWidth(15.0);
	cout << "Width of box is: " << box.getWidth() << endl;
	return 0;
}