//To test whether a no. is Prime or not
#include <iostream>
#include<conio.h>
using namespace std;
void main()
{
	int n, i;
	bool isPrime = true;
	cout << "Enter a positive integer: ";
	cin >> n;
    for (i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	if (isPrime)
		cout << "This is a prime number";
	else
		cout << "This is not a prime number";
_getch();
}
/* Output :
Enter a positive integer: 19
This is a prime number
Enter a positive integer: 20
This is not a prime number
*/