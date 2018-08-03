#include <iostream>

using namespace std;

class Liquid
{
	float specific_gravity;

	public:
		void input()
		{
			cout << "Specific gravity: ";
			cin >> specific_gravity;
		}

		void output()
		{
			cout << "Specific gravity: " << specific_gravity << endl;
		}
};

class Fuel
{
	float rate;
	public:
		void input()
		{
			cout << "Rate per litre: ";
			cin >> rate;
		}
		void output()
		{
			cout << "Rate per litre: " << rate << endl;
		}

};

class Petrol: public Liquid, public Fuel
{
	public:
		void input()
		{
			Liquid::input();
			Fuel::input();
		}
		void output()
		{
			Liquid::output();
			Fuel::output();
		}

};

int main()
{
	Petrol petr;

	cout << "Enter data: " << endl;
	petr.input();

	cout << "Displaying data: " << endl;
	petr.output();
	return 0;
}