//Hybrid Inheritance
#include <iostream>
using namespace std;
class Base1
{
public:
	int a;
};
class Base2
{
public:
	int b;
};
class InheritingClass : public Base1, public Base2
{
public:
	int c;
};
void main()
{
	InheritingClass obj1;
	obj1.a = 1;
	obj1.b = 2;
	obj1.c = 3;

	cout << obj1.a + obj1.b + obj1.c;
}
