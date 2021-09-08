// To read a line of text and count the no. of words in it.
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
void main()
{
	char strs[100], countw = 0, strw[15];
	int i, len;
	cout << "Write a sentence : ";
	cin.getline(strs,100);
	len = strlen(strs);
	for (i = 0; i<=len; i++)
	{
		if (strs[i] == ' ')
		{
			countw++;
		}
	}
	cout << "Total number of words in the sentence is " << countw + 1;
	_getch();
}
/* Output :
Write a sentence : My name is Khan and I am not a terrorist.
Total number of words in the sentence is 10
*/