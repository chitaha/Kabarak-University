#include <iostream>
#include <string>

using namespace std;

class BuckysClass
{
	public:
		void setName(string x)
		{
			name = x;
		}
		string getName()
		{
			return name;
		}
	
	private: // it is good practice to make class variables private
		string name;
};	

int main()
{
	BuckysClass buckysObj;
	buckysObj.setName("Bucky Roberts");
	cout << buckysObj.getName() << endl;
	return 0;
}