
#include <iostream>

using namespace std;

// we define data in private section and related 
// functions in public section so that they can be 
// // from outside the class
// 
class Line
{
	public:
		double length;
		void setLength(double len);
		double getLength(void);

};

void Line::setLength(double len)
{
	length = len;
}

double Line::getLength(void)
{
	return length;
}


int main()
{
	Line line;

	//set line length
	line.setLength(6.0);
	cout << "Length of line: " << line.getLength() << endl;

	//set line length without member function
	line.length = 10.0; // this is okay because length is public
	cout << "Length of line: " << line.length << endl;

	return 0;
}