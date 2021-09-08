// Display of values using pass by reference (Both using address and pointers)
#include<iostream>
#include<conio.h>
using namespace std;
void cal(int a, int b, int &sum, int &m, int *p, int *l);
void main()
{
	int a, b,c, m, l,sum;
	int *p;
	cout << "Enter a and b" << endl;
	cin >> a >> b;	
	m = a;
	c = a;
	l = a;
	p = &c;
	cout << "Before" << endl;
	cout << "a =" << a << endl;
	cout<<"b="<< b << endl; 
	cout<<"c="<<c << endl; 
	cout<<"m="<< m << endl;
	cout << "l=" << l << endl;
	cal(a,b,sum,m,p, &l);
	cout << "After" << endl;
	cout << "a =" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "m=" << m << endl;
	cout << "l=" << l << endl;
	cout << "sum=" << sum << endl;
	_getch();
}
void cal(int a, int b, int &sum, int &m, int *p, int *l)
{
	sum = a + b;
	a = a + 1;
	m = m + 2;
	*p = *p + 3;
	*l = *l + 4;

}
/*output
Enter a and b
10
20
Before
a =10
b=20
c=10
m=10
l=10
After
a =10
b=20
c=13
m=12
l=14
sum=30
*/