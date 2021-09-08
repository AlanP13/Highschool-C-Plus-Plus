// To find the factorial of a no. using int fact(int)
#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}
void main()
{
	int n, result;
	cout << "Enter the no. :";
	cin >> n;
	result = fact(n);
	cout << "The factorial is :" << result;
	_getch();
}
/* Output :
Enter the no. :10
The factorial is :3628800
*/