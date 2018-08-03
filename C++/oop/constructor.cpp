/**
 * p.s do not print anything out on your constructor
 * constructors give variables an initial value
 */
#include <iostream>
#include <string>

using namespace std;

class BuckysClass
{
	public:
		BuckysClass(string z) // constructor --> same name as class
		{
			setName(z);
		}
		void setName(string x)
		{
			name = x;
		}
		string getName()
		{
			return name;
		}
	private:
		string name;
};

int main()
{
	BuckysClass bo("Lucky Bucky Roberts"); // the constructor will be printed automatically
	cout << bo.getName() << endl;

	BuckysClass bo2("Wentworth Miller");
	cout << bo2.getName() << endl;
	return 0;
}