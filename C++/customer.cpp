#include <iostream>

using namespace std;

int main()
{
	int charge, cus_no;
	float units;

	cout << "Enter customer number: ";
	cin >> cus_no;

	cout << "Enter the number of units consumed: ";
	cin >> units;

	if (units <= 200)
	{
		charge = units * 0.50;
		cout << "Your charge is " << charge << endl;
	}
	else if (units > 200 && units <= 400)
	{
		charge = (units * 0.65) + 100;
		cout << "Your charge is " << charge << endl;
	}
	else if (units > 400 && units <= 600)
	{
		charge = (units * 0.80) + 230;
		cout << "Your charge is " << charge << endl;
	}
	else if (units > 600)
	{
		charge = (units * 1.00) + 390;
		cout << "Your charge is " << charge << endl;
	}
	else
	{
		cout << "Enter a valid number: ";
	}

	return 0;
}