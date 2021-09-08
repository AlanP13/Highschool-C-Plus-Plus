//static
#include<iostream>
#include<conio.h>
using namespace std;
class overload
{
private:
	int a, b;
public:
	int load(int x) 
	{  	a = x;
		return a;
	}
	int load(int x, int y) 
	{   a = x;
		b = y;
		return a * b;
	}
};
int main() 
{	overload O1;
	O1.load(20);
	O1.load(20, 40); 
	_getch();
}