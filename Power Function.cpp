//Program 1B: Program to calculate the value of x^y using a recursive function

#include <iostream>
#include<conio.h>
using namespace std;
long power(int x, int y)
{
	if (y == 0) return 1;
	else return x * power (x, y-1);
}
void main()
{
	int x, y;
	cout << "Enter base (x): ";
	cin >> x;
	cout << "Enter exponent (n): ";
	cin >> y;
	cout << "x^n = " << power(x,y) << endl;
	_getch();
}