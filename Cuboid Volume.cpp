//Program 1A: Program to find volume of a cuboid

#include <iostream>
using namespace std;

float volume(float length, float breadth, float height);

void main()
{
	float length, breadth, height;
	cout << "Enter length of the cuboid: ";
	cin >> length;
	cout << "Enter breadth of the cuboid: ";
	cin >> breadth;
	cout << "Enter height of the cuboid: ";
	cin >> height;

	cout << "Volume of the cuboid is: " << volume(length, breadth, height) << " units" << endl;
}

float volume(float length, float breadth, float height)
{
	return length * breadth * height;
}