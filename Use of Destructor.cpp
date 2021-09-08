//Use of Destructor
#include<iostream>
#include<conio.h>
using namespace std;
class sq
{public:
	float l;
	sq()
	{
		l = 0.0;
		cout << "New square with length 0 is created"<<endl;
	}
	sq(float l1)
	{
		l = l1;
		cout << "New square with length" << l << "is created"<<endl;
	}
	~sq()
	{
		cout << "New square with length" << l << "is destroyed"<<endl;
	}
};
void main()
{
	sq s1;
	sq s[2];
	for (int i = 0; i < 2; i++)
	{
		s[i].l = i++;
		sq s2(3);
	}
	_getch();
}
/* Output:-
New square with length 0 is created
New square with length 0 is created
New square with length 0 is created
New square with length3is created
New square with length3is destroyed */