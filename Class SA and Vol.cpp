//To calculate the Surface Area and Volume of a sphere
#include<iostream>
#include<conio.h>
using namespace std;
float const pi = 3.14;
void cal(float &vol, float &surface_area, int r)
{
	vol = (4* pi*r*r*r)/3;
	surface_area = 4 * pi*r*r;
}
void main()
{
	int r;
	float vol, surface_area;
	cout << "Enter the radius of sphere :";
	cin >> r;
	cal(vol, surface_area, r);
	cout << "Volume of sphere is :" << vol << endl;
	cout << "Surface area of sphere is :" << surface_area << endl;
	_getch();
}
/* Output :
Enter the radius of sphere :10
Volume of sphere is :4186.67
Surface area of sphere is :1256
*/