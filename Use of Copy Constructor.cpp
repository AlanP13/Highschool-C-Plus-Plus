//Demonstrate the use of copy constructor: Implement and test the use of copy contructor for the Circle class.
#include <iostream>
using namespace std;
class Circle
{
public:
	float radius;
	Circle(float r = 0.0f)
	{
		radius = r;
	}
	Circle (Circle& original)
	{
		radius = original.radius;
		cout << "copy constructor is called" << endl;
	}
};
void main()
{
	Circle c1(5.0);
	Circle c2 = c1;
}