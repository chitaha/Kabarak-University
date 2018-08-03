#include <iostream>
#include <string>

using namespace std;

class MyClass
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
	private:
		string name;
};

int main()
{
	MyClass myObject;
	myObject.setName("Consolata Mmbone");
	cout << myObject.getName() << endl;
	return 0;
}