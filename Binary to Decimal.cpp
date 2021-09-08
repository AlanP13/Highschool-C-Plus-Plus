//To convert binary no. to decimal no. using void convert()
#include <iostream>
#include <cmath>
#include<conio.h>
using namespace std;
void convert(long long,int &decimalNumber);
void main()
{
	long long n;
	int decimalNumber = 0;
	cout << "Enter a binary number: ";
	cin >> n;
	cout << n << " in binary = ";
	convert(n,decimalNumber);
		cout<<decimalNumber<< " in decimal.";
	_getch();
}
void convert(long long n, int &decimalNumber)
{
	int i = 0, remainder;
	while (n != 0)
	{
		remainder = n % 10;
		n /= 10;
		decimalNumber += remainder * pow(2, i);
		++i;
	}
}
/* Output : 
Enter a binary number: 1100
1100 in binary = 12 in decimal.
*/