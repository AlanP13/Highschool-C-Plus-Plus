//To accept a string from keyboard and check whether pallendrome or not.
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void main()
{
	char str[50];
	char rev[50];
	cout << "Enter the String :";
	cin >> str;
	strcpy_s(rev, str);
	_strrev(rev);
	if (strcmp(str, rev) == 0)
	{
		cout << "It's a pallendrome";
	}
	else
	{
		cout << "It's not a pallendrome";
	}
	_getch();
}
/* Output :
Enter the String :Hello
It's not a pallendrome
Enter the String :malayalam
It's a pallendrome
*/