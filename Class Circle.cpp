//To create a class Circle with one parameter radius and two methods getArea() and getCircumference()
#include <iostream>
using namespace std;

const float PI = 3.1415;

class Circle
{
public:
	float radius;
	float getArea()
	{
		return PI * radius * radius;
	}
	float getCircumference()
	{
		return 2 * PI * radius;
	}
};



void main()
{
	Circle c;
	cout << "Enter the radius of the circle: ";
	cin >> c.radius;
	cout << "Area = " << c.getArea() << endl;
	cout << "Circumference = " << c.getCircumference() << endl;
}