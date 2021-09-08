//To do function overloading
#include<iostream>
#include<conio.h>
using namespace std;
int add(int a, int b)
{
	return a + b;
}
int add(int a, int b, int c)
{
	return a + b + c;
}
void main()
{
	int a, b, c;
	cout << "Enter the values";
	cin >> a >> b >> c;
	cout << "Sum of a and b " << add(a, b) << endl;
	cout << "Sum of a, b and c " << add(a, b, c) << endl;
	cout << "Sum of b and c " << add(b, c);
	_getch();
}
/*Output
Enter the values
10
20
30
Sum of a and b 30
Sum of a, b and c 60
Sum of b and c 50
*/