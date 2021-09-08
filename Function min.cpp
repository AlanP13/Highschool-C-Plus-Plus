// To find smallest no. using min() function
#include <iostream> 
#include <algorithm>
#include<conio.h>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "Enter any 4 integers" << "\n";
	cin >> a >> b >> c >> d;
	cout << "The smallest integer entered is :";
	cout << min({a,b,c,d}) << "\n";
	_getch();
}
/* Output :
Enter any 4 integers
13
43
45
56
The smallest integer entered is :13
*/