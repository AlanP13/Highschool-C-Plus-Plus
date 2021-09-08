#include<iostream>
#include<conio.h>
float const pi = 3.14;
using namespace std;
void cal(float &vol, float &surface_area, int r)
{
	vol = 4 / 3 * r*r*r*pi;
	surface_area = 4 * pi*r*r;
}
void main()
{
	int r;
	float vol, surface_area;
	cout << "Enter the value of RADIUS of sphere" << endl;
	cin >> r;
	cal(vol, surface_area, r);
	cout << "Volume of sphere :" << vol << endl;
	cout << "Surface area of sphere :" << surface_area << endl;
	_getch();
}
/* Output:
Enter the value of RADIUS of sphere
1
Volume of sphere :3.14
Surface area of sphere :12.56
*/