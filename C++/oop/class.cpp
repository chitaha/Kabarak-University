#include <iostream>

using namespace std;

class BuckysClass
{
	public:	// access specifier
		void coolSaying()
		{
			cout << "Preaching to the choir" << endl;
		}
};

int main()
{
	BuckysClass buckysObject;
	buckysObject.coolSaying();
	return 0;
}