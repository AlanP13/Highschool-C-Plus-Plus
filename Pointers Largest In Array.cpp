//To find the largest in the given array using pointers
#include<iostream>
#include<conio.h>
using namespace std;
int max(int*, int);
void main()
{
	int a[10];
	cout << "Enter 10 no.s :" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	int size = sizeof(a) / sizeof a[0];
	cout <<"The maximum in the array is :"<< max(a,size);
	_getch();
}
int max(int *ptr, int size)
{
	int max;
	max = ptr[0];
	for (int i = 0; i < size; i++)
	{
		if (max< ptr[i])
		{
			max = ptr[i];
		}
	}
	return max;
}
/* Output :
Enter 10 no.s :
0 1 2 3 4 5 6 7 8 9
The maximum in the array is :9
*/