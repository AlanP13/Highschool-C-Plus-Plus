// To search an element in the list from user through binary search
#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int n, i, arr[50], search, first, last, middle;
	cout << "Enter total number of elements :"<< endl;
	cin >> n;
	cout << "Enter " << n << " number :" << endl;
	for (i = 0; i<n; i++)
	{
		cin >> arr[i];
	}
	cout << "Enter a number to find :" << endl;
	cin >> search;
	first = 0;
	last = n - 1;
	middle = (first + last) / 2;
	while (first <= last)
	{
		if (arr[middle] < search)
		{
			first = middle + 1;

		}
		else if (arr[middle] == search)
		{
			cout << search << " found at location " << middle + 1 << "\n";
			break;
		}
		else
		{
			last = middle - 1;
		}
		middle = (first + last) / 2;
	}
	if (first > last)
	{
		cout << "Not found! " << search << " is not present in the list.";
	}
	_getch();
}
/* Output :
Enter total number of elements :5
Enter 5 number : 1 12 123 1234 12345
Enter a number to find : 1234
1234 found at location 4
*/