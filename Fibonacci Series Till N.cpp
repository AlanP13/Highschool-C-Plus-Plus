// Print Fibonacci Series till n terms
#include <iostream>
#include<conio.h>
using namespace std;
void main()
{
	int n, t1 = 0, t2 = 1, nextTerm = 0;
	cout << "Enter the number of terms: ";
	cin >> n;
	cout << "Fibonacci Series: ";
	for (int i = 1; i <= n; ++i)
	{
		if (i == 1)
		{
			cout << " " << t1<<" ";
			continue;
		}
		if (i == 2)
		{
			cout << t2 << " ";
			continue;
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		cout << nextTerm << " ";
	}
	_getch();
}
/* Output :
Enter the number of terms: 10
Fibonacci Series:  0 1 1 2 3 5 8 13 21 34
*/