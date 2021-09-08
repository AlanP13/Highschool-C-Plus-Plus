// Function using Pass by Refernce
#include <iostream>
using namespace std;
void passByValue(int x)
{
	x = x + 1;
}
void passByReference(int &x)
{
	x = x + 1;
}
void main()
{
	int a = 10;
	cout << "a = " << a << endl; //Output : 10
	//Copy of variable is sent in pass by value. Original value is not changed
	passByValue(a);
	cout << "a = " << a << endl; //Output : 10
	//A pointer to the orginal variable is sent in pass by reference.
	//Any changes in the function will change the original value.
	passByReference(a);
	cout << "a = " << a << endl; //Output : 11
}
