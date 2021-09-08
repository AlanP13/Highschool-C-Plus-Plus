// Volume of a Sphere Pass by Ref 
#include<iostream>
#include<conio.h>
using namespace std;
double const pi= 3.14;
void GetVolume(double r,double &vol, double &area);

void main()
{	
	double radius;
	double volume = 0;
	double area=0; 

	cout << "Enter the radius "; 
	cin >> radius; 
	
	GetVolume(radius, volume, area);
	
	cout<<"The volume is "<< volume<< endl;
	cout<<"The area is "<< area;  

	getch(); 
}

 void GetVolume(double r,double &vol, double &area)
{
	vol = (4 * pi* r * r* r ) /3 ;
	area = 4 * pi* r * r ;
}

/*OUTPUT
Enter the radius 4
The volume is 267.947
*/