// TO print the start, end address of the elements of the array
#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int n[10];
	int *ptr, sum = 0, i;
	cout << "Enter 10 no.s :" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> n[i];
	}
	ptr = n;
	cout << "\n Start Add. \t Size \t      End Add. \t      Value" << endl;
	for (i = 0; i < 10; i++)
	{
		sum = sum + *ptr;
		cout << "\n\n" << ptr << "\t\t" << sizeof(*ptr) << "\t";
		ptr = ptr + 1;
		cout << ptr << "\t\t" << sum;
	}
	_getch();
}
/* Output :
Enter 10 no.s :
1 2 3 4 5 6 7 8 9 10
Start Add.            Siz       End Add.             Value
001BFC60                4       001BFC64                1

001BFC64                4       001BFC68                3

001BFC68                4       001BFC6C                6

001BFC6C                4       001BFC70                10

001BFC70                4       001BFC74                15

001BFC74                4       001BFC78                21

001BFC78                4       001BFC7C                28

001BFC7C                4       001BFC80                36

001BFC80                4       001BFC84                45

001BFC84                4       001BFC88                55
*/