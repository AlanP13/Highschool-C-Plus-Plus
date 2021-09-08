//Constructors and Destructors in C++
#include <iostream>
using namespace std;

class Square
{
public:
	float length;
	Square()
	{
		length = 0.0;
		cout << "A new square has been created. No length was specified. Setting length to 0" << endl;
	}

	Square (float l)
	{
		length = l;
		cout << "A new square has been created with length = " << length << endl;
	}

	~Square()
	{
		cout << "Square with length " << length << " is no longer available" << endl;
	}
};

void main()
{
	Square s1;
	Square s[2];
	for (int i = 0; i < 2; i++)
	{
		s[i].length = i+1;
		Square s2(3);
	}
}