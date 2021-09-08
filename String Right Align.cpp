//To Enter a string and right align it.
#include <iostream>
#include<conio.h>
#include <iomanip>
using namespace std;
void main()
{
	char str[100];
	cout << "Enter a String :";
	cin.getline(str,100);
	std::cout << std::right << std::setw(100) << str << endl;
	_getch();
}
/*Output :
Enter a String :Hello, I am Alan.
                                                                  Hello, I am Alan.
*/