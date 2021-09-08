//Use of Constructor
#include<iostream>
#include<conio.h>
using namespace std;
class ratio
{
public:
	int n;
	int d;
	ratio()
	{
		cout << "Default constructor" << endl;
	}
	ratio(int n1, int d1 = 1)
	{
		cout << "Overloaded constructor" << endl;
		n = n1;
		d = d1;
	}
	void display()
	{
		cout << "The ratio is" << n << "/" << d << endl;
	}
};
void main()
{
	ratio r4;
	cout << "Enter value of numerator" << endl;
	cin >> r4.n;
	cout << "Enter value of denomenator" << endl;
	cin >> r4.d;
	r4.display();
	ratio r1;
	r1.n = 2;
	r1.d = 4;
	r1.display();
	ratio r2(5, 10);
	r2.display();
	ratio r3(5);
	r3.display();
	_getch();
}
/* Output:-
Default constructor
Enter value of numerator
3
Enter value of denomenator
9
The ratio is3/9
Default constructor
The ratio is2/4
Overloaded constructor
The ratio is5/10
Overloaded constructor
The ratio is5/1 */