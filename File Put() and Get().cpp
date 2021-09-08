//put and get
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ofstream fout;
	char ch;
	fout.open("demo");			//Statement 1

	do							//Statement 2
	{   cin.get(ch);
		fout.put(ch);} while (ch != EOF);
	fout.close();
	cout << "\nData written successfully...";
	ifstream fin;
	char h;
	fin.open("demo");			//Statement 1
	cout << "\nData in file...";
    while (!fin.eof())			//Statement 2
	{
		fin.get(h);
		cout << h;
	}
    fin.close();
	_getch();}

/*Output:

Hello friends, my name is Alan.^Z
Data written successfully...
Data in file...
Hello friends, my name is Alan.
*/