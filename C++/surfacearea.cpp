/**
 * Write a program to find the surface area
 * of a tube dimension
 */

#include <iostream>

using namespace std;

#define PI 3.1459

int surfaceArea(float out_rad, float in_rad, float height);

int main()
{
	float ext_r, int_r, h;
	float area;

	cout << "Enter the outer radius: ";
	cin >> ext_r;
	cout << "Enter the inner radius: ";
	cin >> int_r;
	while (int_r > ext_r)
	{
		cout << "Inner radius can't be greater than outer radius.\n";
		cout << "Enter inner radius again: ";
		cin >> int_r;
	}
	cout << "Enter the height: ";
	cin >> h;

	area = surfaceArea(ext_r, int_r, h);

	cout << "The surface area of your tube is " << area << endl;

	return 0;
}

int surfaceArea(float out_rad, float in_rad, float height)
{
	float ext_sArea, int_sArea, csec_area, total_sArea;

	ext_sArea = 2 * PI * out_rad * height;
	int_sArea = 2 * PI * in_rad * height;
	csec_area = PI * ((out_rad * out_rad) - (in_rad * in_rad));

	total_sArea = ext_sArea + int_sArea + (csec_area * 2);
	
	return total_sArea;
}
