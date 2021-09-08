// C++ program to count occurrences of a 'J' 
#include <iostream> 
#include<conio.h>
#include <string> 
using namespace std;
int count(string s, char c, char d)
{
	int res = 0;
	for (int i = 0; i < s.length(); i++)
		if (s[i] == c || s[i] == d)
			res++;
	return res;
}
void main()
{
	char str[50];
	cout << "Enter the string:";
	cin.getline(str, 50);
	char c = 'j';
	char d ='J';
		cout << count(str, c, d) << endl;
	_getch();
}
/* Output:
Enter the string: Jack and Jill went to Jodhpur for some jockstraps and jockeys.
4
*/
