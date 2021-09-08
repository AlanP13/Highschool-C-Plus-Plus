//Files read and write
#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
using namespace std;
class country
{
public:
	string name;
	string capital;
	country(string n = " ", string y = " ")
	{
		name = n;
		capital = y;
	}
	void display()
	{
		cout << "Country is " << name << "Capital is " << capital << endl;
	}
};
void main()
{
	country c1;
	fstream coun;
	fstream cap;
	coun.open("c:\\Alan\\Country.txt", ios::in);
		cap.open("c:\\Alan\\Capital.txt", ios::in);
		while (getline(coun, c1.name) && getline(cap, c1.capital))
		{
			c1.display();
		}
		_getch();
}
/* Output:-
Country is INDIA Capital is NEW DELHI
Country is CANADA Capital is TORONTO
Country is RUSSIA Capital is MOSCOW
Country is CHINA Capital is BEIJING */