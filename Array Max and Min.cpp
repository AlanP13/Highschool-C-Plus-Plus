//To find maximum and minimum of an array and tell their position
#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	double numbers[10];
	int i, max, min, pmax, pmin;
	cout << "Enter 10 no.s" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> numbers[i];
	}
	max = numbers[0];
	for (i = 1; i < 10; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
			pmax = i;
		}
	}
	min = numbers[0];
	for (i = 1; i < 10; i++)
	{
		if (min > numbers[i])
		{
			min = numbers[i];
			pmin = i;
		}
	}
	cout << "The maximum no. is :" << max << " at position :" << pmax + 1 << endl;
	cout << "The minimum no. is :" << min << " at position :" << pmin + 1 << endl;
	_getch();
}
/* Output :
Enter 10 no.s
1 2 3 4 5 6 7 8 9 0
The maximum no. is :9 at position :9
The minimum no. is :0 at position :10
*/