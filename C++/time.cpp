/**
 * A vehicle travelling at a speed of 80km\hr
 * from point c to d, 100 km apart is supposed 
 * to cover that distance after a number of hours.
 * Write a program to determine fow long it will
 * take to cover the distance.
 */

#include <iostream>

using namespace std;

int main()
{
	float distance = 100, speed = 80;
	int time, hours, minutes;

	// calculates the time in minutes
	time = (distance / speed) * 60;

	// converts the minutes to hours and minutes
	hours = time / 60;
	minutes = time % 60;

	// cout << "Time taken is " << time << " minutes." << endl;
	cout << "Time taken is " << hours << " hour and " << minutes << " minutes." << endl;

	return 0;
}