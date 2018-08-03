#include <iostream>

using namespace std;

class Line
{
public:
	void setLength(double len);
	double getLength();
	Line(); // this is a constructor declaration
	~Line(); // this is a destructor declaration

private:
	double length;
};

Line::Line()
{
	cout << "Object is being created" << endl;
}

Line::~Line()
{
	cout << "Object is being deleted" << endl;
}

void Line::setLength(double len)
{
	length = len;
}

double Line::getLength()
{
	return length;
}

int main()
{
	Line line;

	// set line length
	line.setLength(6.0);
	cout << "Length of line: " << line.getLength() << endl;

	return 0;
}