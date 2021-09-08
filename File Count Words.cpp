#include <fstream>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<string>
#include<ctype.h>
using namespace std;
int main()
{
	ifstream I("TextFile1");
	char str[30];
	int count = 0;
	while (!I.eof())
	{
		I >> str;
		count++;
	}
	cout << count << " words are present in file" << endl;
	I.close();
	_getch();
}
/*Output:
15 words are present in the file
*/