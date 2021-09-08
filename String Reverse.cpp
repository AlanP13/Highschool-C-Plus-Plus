// To reverse astring and display both
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void main()
{
	char str[100];
	char reversed[100];
	cout << "Enter a New String :";
	cin >> str;
	strcpy_s(reversed, str);
	_strrev(reversed);
	cout << "The Reversed is :" << reversed;
	_getch();
}
/* Output :
Enter a New String :David
The Reversed is :divaD
*/