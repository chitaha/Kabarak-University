#include <iostream>

using namespace std;

class Line
{
public:
	void setLength(double len);
	double getLength();
	Line(); // This is the constructor

private:
	double length;
};

void Line::setLength(double len)
{
	length = len;
}

double Line::getLength()
{
	return length;
}

// member functions definitions including constructors

Line::Line()
{
	cout << "Object is being created" << endl;
}


int main()
{
	Line line;

	line.setLength(6.5);
	cout << "The length of the line is " << line.getLength() << endl;
	
	return 0;
}