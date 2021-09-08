// Multiple Inheritance
# include <iostream>
using namespace std;
class base
{
public:
	void displaybase()
	{
		cout << "Base" << endl;
	}
};
class parent1 : public virtual base
{
	public:
	void displayparent1()
	{
	}
};
class parent2 : public virtual base
{public:
	void displayparent2(){}
};
class child : public parent1, public parent2
{
	public:
		void displaychild(){}
};
void main()
{
	child c;
	c.displaybase();
}