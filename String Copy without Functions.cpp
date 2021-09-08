//To accept a string from keyboard and copy without any string library functions.Display both.
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
void main()
{
	char strs1[100];
	char strs2[100];
	int i;
	cout << "Write a sentence : ";
	cin.getline(strs1, 100);
	cout << "The original string is :" << strs1 << endl;
	for (i = 0; strs1[i] != '\0'; ++i)
	{
		strs2[i] = strs1[i];
	}
	for (i = 0; i <= 100; i++)
	{
		strs2[i] = strs1[i];
	}
	cout << "The copied string is :" << strs2 << endl;
	_getch();
}
/* Output :
Write a sentence : I am Alan, The first born of Biju George.
The original string is :I am Alan, The first born of Biju George.
The copied string is :I am Alan, The first born of Biju George.
*/
