// To replace all space with Hyphens
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void main()
{
	char str[80];
	cout << "Enter a String :";
	cin.getline(str, 80);
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			str[i] = '-';
		}
	}
	cout << "New String :" << str;
	_getch();
}
/* Output :
Enter a String :My name is Khan and I am not a terrorist
New String :My-name-is-Khan-and-I-am-not-a-terrorist
*/