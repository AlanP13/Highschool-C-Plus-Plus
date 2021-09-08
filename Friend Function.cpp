//Friend Function usage
#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	float r, i;
public:
	friend complex add(complex c1, complex c2);
	complex(float r1 = 0, float i1 = 0)
	{
		r = r1; i = i1;
	}
	void display()
	{
		cout << "Complex no. is " << r << "+" << i <<"i"<< endl;
	}
};
complex add(complex c1, complex c2)
{
	complex result;
	result.r = c1.r + c2.r;
	result.i = c1.i + c2.i;
	return result;
}
void main()
{
	complex c1(5, 5);
		complex c2(-4, -4);
		complex c3 = add(c1, c2);
		c3.display();
		_getch();
}
/* Output:-
Complex no. is 1+1i */