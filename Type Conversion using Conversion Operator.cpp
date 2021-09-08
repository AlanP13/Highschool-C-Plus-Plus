//Type Conversion in C++
//Program 7B: To use constructors to convert the polar coordinates into rectangular coordinates using conversion/casting operator

#include <iostream>
#include <math.h>
using namespace std;
const float PI = 3.1415f;

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

	void display()
	{
		cout << "Coordinates are: " << x << "," << y << endl;
	}
};

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

	operator Rectangular()
	{
		float x = r * cos(theta*PI/180);
		float y = r * sin(theta*PI/180);
		return Rectangular(x,y);
	}
};

void main()
{
	Polar p(1,30);
	Rectangular r = p;
	r.display();
}