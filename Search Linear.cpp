// To search element in the list from user using linear search
#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int arr[10], i, num, n, c = 0, pos;
	cout << "Enter the array size : ";
	cin >> n;
	cout << "Enter Array Elements : ";
	for (i = 0; i<n; i++)
	{
		cin >> arr[i];
	}
	cout << "Enter the number to be search : ";
	cin >> num;
	for (i = 0; i<n; i++)
	{
		if (arr[i] == num)
		{
			c = 1;
			pos = i + 1;
			break;
		}
	}
	if (c == 0)
	{
		cout << "Number not found..!!";
	}
	else
	{
		cout << num << " found at position " << pos;
	}
	_getch();
}
/* Output :
Enter the array size : 5
Enter Array Elements : 1 12 123 1234 12345
Enter the number to be search : 123
123 found at position 3*/