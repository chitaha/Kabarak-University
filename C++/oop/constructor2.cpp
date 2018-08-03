#include <iostream>
#include <string>

using namespace std;

class StarWars
{
	public:
		StarWars(string z)
		{
			setString(z);
		}
		void setString(string x)
		{
			name = x;
		}

		string getString()
		{
			return name;
		}
	private:
		string name;
};

int main()
{
	StarWars starObj("Darth Vader was trained by Darth Sidius");
	cout << starObj.getString() << endl;
	return 0;
}