//To sort 10 no.s using bubble sort
#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int n=10, i, arr[50], j, temp;
	cout << "Enter " << n << " numbers :"<<endl;
	for (i = 0; i<n; i++)
	{
		cin >> arr[i];
	}
	cout << "Sorting array using bubble sort technique...\n";
	for (i = 0; i<(n - 1); i++)
	{
		for (j = 0; j<(n - i - 1); j++)
		{
			if (arr[j]>arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "Elements sorted successfully..!!\n";
	cout << "Sorted list in ascending order :\n";
	for (i = 0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	_getch();
}
/* Output :
Enter total number of elements :5
Enter 5 numbers :1 123 12 12345 1234
Sorting array using bubble sort technique...
Elements sorted successfully..!!
Sorted list in ascending order :
1 12 123 1234 12345
*/