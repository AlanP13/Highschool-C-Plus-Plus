//Type Conversion in C++
//Program 7A: To use constructors to convert the polar coordinates into rectangular coordinates from their respective classes

#include <iostream>
#include <math.h>
using namespace std;
const float PI = 3.1415;

class Polar
{
public:
	float r;
	float theta;
	Polar(float r1 = 0, float theta1 = 0)
	{
		r = r1;
		theta = theta1;
	}
};

class Rectangular
{
public:
	float x;
	float y;
	Rectangular(float x1 = 0, float y1 = 0) 
	{
		x = x1;
		y = y1;
	}
	Rectangular(Polar p1)
	{
		x = p1.r * cos(p1.theta*PI/180);
		y = p1.r * sin(p1.theta*PI/180);
	}
	void display()
	{
		cout << "Coordinates are: " << x << "," << y << endl;
	}
};

void main()
{
	Polar p2(1,30);
	Polar mypolar(2,60);
	Rectangular obj1(p2);
	Rectangular obj2(mypolar);
	obj1.display();
	obj2.display();
}