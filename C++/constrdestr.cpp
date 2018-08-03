#include <iostream>

using namespace std;

class Line
{
	private:
		int length;

	public:
		Line()
		{
			cout << "Line is being created." << endl;
		}

		~Line()
		{
			cout << "Line is being destroyed." << endl;
		}

		void setLength(int len)
		{
			length = len;
		}

		int getLength()
		{
			return length;
		}

};


int main()
{
	Line l;

	l.setLength(7.0);
	cout << "Your line is " << l.getLength() << " units" << endl;
	
	return 0;
}