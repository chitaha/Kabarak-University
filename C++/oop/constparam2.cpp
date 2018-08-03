#include <iostream>

using namespace std;

class Line
{
public:
	void setLength(double len);
	double getLength();
	Line(double len);

private:
	double length;
};

Line::Line(double len):length(len)
{
	cout << "Line is being created of length " << len << endl;
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
	Line line(10.0);

	//get initially set length
	cout << "Length of line: " << line.getLength() << endl;
	
	//set line length again
	line.setLength(6.0);
	cout << "Length of line: " << line.getLength() << endl;

	return 0;
}