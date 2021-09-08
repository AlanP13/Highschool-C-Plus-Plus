// Volume and surface area of a cuboid using  pass by reference 
#include<iostream>
#include<conio.h>
using namespace std;
void cal(int l, int b, int h, int & vol, int &sa);
void main()
{
	int length, breadth, height, vol = 0, sa=0;
	cout << "Enter the length ";
	cin >> length;
	cout << "Enter the breadth ";
	cin >> breadth;
	cout << "Enter the height ";
	cin >> height;
	cal(length, breadth, height, vol,sa);

	cout << "The volume is " << vol<<endl;
	cout << "The surface area is " << sa;

	_getch();
}

void cal(int l, int b, int h, int & vol, int &sa)
{

	vol = l * b * h;
	sa = 2 * (l*b + b*h + l*h);
}

/*output
Enter the length  10
Enter the breadth  20
Enter the height  30
The volume is 6000
The surface area is 2280
*/
/*OUTPUT
Enter the length 5
Enter the breadth 4
Enter the height 4
The volume is 80
*/