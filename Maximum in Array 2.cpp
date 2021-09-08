//Program 1C: Program to find the maximum number in a given array of 10 integers

#include <iostream>
using namespace std;

void main()
{
	int a[10] = {50, 34, -2, 94, 100, 102, 500, 999, 12, 40};
	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		if (a[max] < a [i])
			max = i;
	}
	cout << "The maximum number in the given array is: " << a[max] << endl;
	cout << "The maximum number is located at position " << max + 1 << endl;
}