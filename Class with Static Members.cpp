//Implement a class Rectangle with a static member called count to keep a count on the number of rectangles created

#include <iostream>
using namespace std;
class Rectangle{
public:
	int length;
	Rectangle()	{
		count++;
	}
	~Rectangle(){count--;}
	static void displayCount();
private:
	static int count;
};
int Rectangle::count;
void Rectangle::displayCount()
{
	cout << "There are " << count << " rectangles" << endl;
}
void main()
{
	Rectangle rectangles[5];
	Rectangle::displayCount();
}