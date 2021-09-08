//Dynamic 
#include<iostream>
#include<conio.h>
using namespace std;
class base
{public:
	virtual void funct() 
	{ cout << "This is a base class's funct()";}};
class derived1 : public base 
{public:
	void funct() 
	{ cout << "This is a derived1 class's funct()";}};
class derived2 : public base {
public:
	void funct() 
	{ cout << "This is a derived2 class's funct()";}};
int main()
{   base *p, b;
	derived1 d1;
	derived2 d2;
	*p = &b;
	p->funct(); 
	*p = &d1;
	p->funct();  
	*p = &d2;   
	p->funct();  
	return 0;}