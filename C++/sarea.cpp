/**
 * Write a program to find the surface area
 * of a tube dimension
 */

#include <iostream>

using namespace std;

int pi = 22/7;

int surfaceArea(float out_radius, float in_radius, float height);

int main()
{
	float ext_r, int_r, h;
	float area;

	cout << "Enter the outer radius: ";
	cin >> ext_r;
	cout << "Enter the inner radius: ";
	cin >> int_r;
	cout << "Enter the height: ";
	cin >> h;

	area = surfaceArea(ext_r, int_r, h);

	cout << "The surface area of your tube is " << area << endl;

	return 0;
}

int surfaceArea(float out_radius, float in_radius, float height)
{
	float ext_sArea, int_sArea, csec_area, total_sArea;

	ext_sArea = 2 * pi * out_radius * height;
	int_sArea = 2 * pi * in_radius * height;
	csec_area = pi * ((out_radius * out_radius) - (in_radius * in_radius));

	total_sArea = ext_sArea + int_sArea + (csec_area * 2);
	
	return total_sArea;
}
