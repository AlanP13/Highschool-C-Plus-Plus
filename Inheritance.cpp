//Inheritance in C++
//Program 8A: Demonstrate the feature of Inheritance in C++
#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
	char* name;
	int age;
public:
	int getAge()
	{
		return age;
	}
	char* getName()
	{
		return name;
	}
	Person(char* personName, int personAge)
	{
		name = personName;
		age = personAge;
	}
	Person()
	{
	}
	void displayPerson()
	{
		cout << name << endl;
		cout << age << endl;
	}
};

class Student : public  Person
{
private:
	char* school;
public:
	char* getSchool()
	{
		return school;
	}

	Student(char* studentName, int studentAge, char* schoolName)
	{
		age = studentAge;
		name = studentName;
		school = schoolName;
	}
	Student()
	{
	}
	void displayStudent()
	{
		cout << name << endl;
		cout << age << endl;
		cout << school << endl;
	}
};

void main()
{
	Student s("Tejas Shah", 26, "Fr. Agnels");
	s.displayStudent();
}