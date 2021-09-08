//Virtual function
#include<iostream>
#include<conio.h>
using namespace std;
class base {
public:
	virtual void show() 
	{ cout << "\n  Base class show:";}

	void display() 
	{ cout << "\n  Base class display:";}};
class drive : public base 
{   public:
    void display() 
	{ cout << "\n  Drive class display:";}
    void show() 
	{	cout << "\n  Drive class show:";}};
void main() 
{	base obj1;
	base *p;
	cout << "\n\t P points to base:\n";
	p = &obj1;
	p->display();
	p->show();
	cout << "\n\n\t P points to drive:\n";
	drive obj2;
	p = &obj2;
	p->display();
	p->show();
	_getch();
}
/* Output:
P points to base:
Base class display:
Base class show:
P points to drive:
Base class display:
Drive class show:*/