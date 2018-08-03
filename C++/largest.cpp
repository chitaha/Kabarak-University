#include <iostream>

using namespace std;

int main()
{
	int a,b,c;

	cout << "Enter three numbers: ";
	cin >> a >> b >> c;

	if (a > b)
	{
		if (a > c)
		{
			cout << a << " is the greatest" << endl;
		}
	}
	else if (b > c)
	{
		cout << b << " is the greatest" << endl;
	}
	else
	{
		cout << c << " is the greatest" << endl;
	}

	return 0;
}