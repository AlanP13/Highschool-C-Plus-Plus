 // Using string functions, strcpy, strrev, strcmp and To test for palendrome
#include<iostream>
#include<conio.h>
#include <string.h>

using namespace std;

void main()
{
	char str[50];
	char reversed[50];
	
	cout << "Enter the string ";
	cin >> str;
	strcpy_s(reversed, str);
	_strrev(reversed);
	cout << "The reverse of the string is " << reversed << endl;
	
	if(strcmp(str, reversed) == 0 )
	{
		cout << "Indeed Palendrome"<<endl;
	}
	else
	{
		cout << "Not a Palendrome"<<endl;
	}
	getch(); 
}

/*OUTPUT
Enter the string bharti
The reverse of the string is itrahb
Not a Palidrome

*/