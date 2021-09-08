// Swap no.s using Pass by Reference
#include<iostream>
#include<conio.h>
using namespace std;
void swap(int &, int &);
void main()
{
	int a, b;
	cout << "Enter Value Of A:";
	cin >> a;
	cout << "Enter Value of B:";
	cin >> b;
	cout << "Before swapping\nValue of A is " << a << "\nValue of B is " << b;
	swap(a, b);
	cout << "\nOutside function after swapping\nValue of A is" << a << "\nValue of B is" << b;
	_getch();
}
void swap(int &a, int &b)
{
	int c;
	c = a;
	a = b;
	b = c;
	cout << "\nInside function after swapping\nValue of A is" << a << "\nValue of B is" << b;
}
/* Output :
Enter Value Of A:20
Enter Value of B:30
Before swapping
Value of A is 20
Value of B is 30
Inside function after swapping
Value of A is30
Value of B is20
Outside function after swapping
Value of A is30
Value of B is20
*/