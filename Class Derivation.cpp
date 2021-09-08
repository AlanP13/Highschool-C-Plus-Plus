//Class Derivation
#include <iostream>
using namespace std;
class Shape
{
public:
	virtual int area() = 0;
};
class Rectangle : public Shape
{
private:
	int length;
	int breadth;
public:
	int area()
	{
		return length * breadth;
	}
	Rectangle()
	{
		length = 1;
		breadth = 2;
	}
};
class Square : public Shape
{
private:
	int length;
public:
	int area()
	{
		return length*length;
	}
	Square()
	{
		length = 1;
	}
};
void main()
{
	Square s;
	Rectangle r;
	cout << "Square: " << s.area() << endl;
	cout << "Rectangle: " << r.area() << endl;
}