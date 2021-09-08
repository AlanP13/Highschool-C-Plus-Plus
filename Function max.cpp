// To find the largest no. using max() function
#include <iostream> 
#include <algorithm>
#include<conio.h>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "Enter any 4 integers" << "\n";
	cin >> a >> b >> c >> d;
	cout << "The largest integer entered is :";
	cout << max({ a,b,c,d }) << "\n";
	_getch();
}
/* Output :
Enter any 4 integers
12
123
1234
12345
The largest integer entered is :12345
*/