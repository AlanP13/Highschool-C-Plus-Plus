//tellp and tellg
#include <iostream>
#include <fstream>
#include<conio.h>
using namespace std;
int main()
{   fstream file;
	file.open("sample.txt", ios::out);//open file sample.txt in and Write mode
	if (!file)
	{   cout << "Error in creating file!!!";
		return 0;}
	file << "ABCDEFGHIJKLMNOPQRSTUVWXYZ";//write A to Z
	cout << "Current position is: " << file.tellp() << endl;//print the position
	file.close();
	file.open("sample.txt", ios::in);//again open file in read mode
	if (!file)
	{   cout << "Error in opening file!!!";
		return 0;}
	cout << "After opening file position is: " << file.tellg() << endl;
	char ch;	//read characters untill end of file is not found
	while (!file.eof())
	{   cout << "At position : " << file.tellg();   //current position
		file >> ch;   //read character from file
		cout << " Character \"" << ch << "\"" << endl;}
	file.close();//close the file
	_getch();}
/* Output-
Current position is: 25
After opening file position is: 0
At position : 0 Character "A"
At position : 1 Character "B"
At position : 2 Character "C"
At position : 3 Character "D"
At position : 4 Character "E"
At position : 5 Character "F"
At position : 6 Character "G"
At position : 7 Character "H"
At position : 8 Character "I"
At position : 9 Character "J"
At position : 10 Character "K"
At position : 11 Character "L"
At position : 12 Character "M"
At position : 13 Character "N"
At position : 14 Character "O"
At position : 15 Character "P"
At position : 16 Character "Q"
At position : 17 Character "R"
At position : 18 Character "S"
At position : 19 Character "T"
At position : 20 Character "U"
At position : 21 Character "V"
At position : 22 Character "W"
At position : 23 Character "X"
At position : 24 Character "Y"
At position : 25 Character "Z"*/