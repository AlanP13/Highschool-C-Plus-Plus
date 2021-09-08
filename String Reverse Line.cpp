// To accept string from keyboard and print each character in a new line in reverse order.
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void main()
{
	char str[15], temp;
	int i, j;
	cout << "Enter a string of 15 characters : ";
	cin.getline(str,15);
	j = strlen(str) - 1;
	for (i = 0; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	cout << "\nReverse string : " << endl;
	for (i = 0; i < 15; i++)
	{
		cout << str[i] << endl;
	}
	_getch();
}
/* Output :
Enter a string : I am Alan Biju

Reverse string : 
u
j
i
B

n
a
l
A

m
a

I
*/