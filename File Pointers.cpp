//File pointer
#include<iostream>
#include<fstream>
#include<conio.h>
#include<cstring>
using namespace std;
int main() {
	char data[80], ch;
	cout << "Enter a string for file:" << endl;
	cin >> data;
    fstream file;
    file.open("data.txt", ios::in | ios::out);
    for (int i = 0; i < strlen(data); i++)
    file.put(data[i]);
    cout << "Reading from begining of the file" << endl;
    file.seekg(ios::beg);
	while (file) {
    file.get(ch);
	cout << ch;}
	cout << endl;
	file.close();
	_getch();}
/* Output:
Enter a text for file:
HelloWorld
Reading from begining of the file
HelloWorld*/