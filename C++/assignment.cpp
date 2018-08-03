/**
 * Given the following values 90, 100, 60, 70, 300
 * Write a program that will accept the values then 
 * compare and display the highest value using fuctions
 * 
 * Name       ----> Sarah Chebet Chitaha
 * Reg No     ----> CS/M/0352/05/17
 * Unit title ----> Object Oriented Programming with C++
 * Unit code  ----> Comp 215
 * 
 */
#include <iostream>

using namespace std;

int highest(int num[5]);

int main()
{
	int a[5]; // array of 5 values
	int i;
	int x;

	cout << "\nEnter 5 digits: " << endl;

	// enter the 5 digits
	for (i = 0; i < 5; i++)
	{
		cin >> a[i];
	}

	// print out the entered 5 digits
	cout << "\nYou have entered:" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
    cout << "\n\n";

    // x is the highest digit
	x = highest(a);

	cout << "The highest value is: " << x << endl;

	return 0;
}

// function to get higheat value out of 5 numbers
int highest(int num[5])
{
	// assume that num[0] is the greatest
	int greatest = num[0];
	int i;

	// iterate through the entered values
	for (i = 0; i < 5; i++)
	{
		if (num[i] > greatest)
		{
			greatest = num[i];
		}
	}
	return greatest;
}