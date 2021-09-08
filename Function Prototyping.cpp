//Function Prototyping
#include<iostream>
#include<conio.h>
using namespace std;
void CircleArea(int radius);   // Function Prototype
int main()
{
	CircleArea(3);   // Function Call
	_getch();
}
void CircleArea(int radius)   // Function Definition
{
	float pi = 3.14f;
	float area;

	cout << "Enter the radius of Circle :-\n";
	cin >> radius;

	area = pi * radius*radius;

	cout << "The area of Circle is " << area;
}
/*Output:
Enter the radius of Circle :-
12
The area of Circle is 452.16*/
