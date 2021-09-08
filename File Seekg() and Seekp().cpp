//seekg and seekp
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
struct record
{   char  code[6];
	char name[20];
	int i;}r;
int main()
{   std::fstream file("Temp.dat", std::ios::trunc | std::ios::in | std::ios::out | std::ios::binary);
	if (!file)
	{   std::cout << "unable to open file";
		exit(0);}
	std::cout << "enter character code, name and an int\n";
	std::cin.getline(r.code, 6);
	std::cin.getline(r.name, 20);
	std::cin >> r.i;
	file.write((char *)&r, sizeof(r));
	std::cout << "\n\n" << file.tellg() << '\n' << file.tellp();
	file.seekg(3);
	std::cout << "\n\n" << file.tellg() << '\n' << file.tellp();
	file.seekp(5);
	std::cout << "\n\n" << file.tellg() << '\n' << file.tellp();
	_getch();
}
/* Output:
enter character code, name and an int
Alan Biju Palayil
32
32
3
3
5
5
*/