//Polymorphism and Virtual Functions in C++
//Program 8B: Demonstrate runtime polymorphism using virtual functions
#include <iostream>

using namespace std;

class Person
{
protected:
	char* name;
	int age;
public:
	int getAge(){
		return age;
	}
	char* getName(){
		return name;
	}
	Person(char* personName, int personAge){
		name = personName;
		age = personAge;
	}
	Person(){}
	virtual void display(){
		cout << name << endl;
		cout << age << endl;
	}
};

class Teacher : public Person
{
	void display(){
		cout << "Pointing to a teacher" << endl;
	}
};

class Student : public Person
{
private:
	char* school;
public:
	char* getSchool(){
		return school;
	}

	Student(char* studentName, int studentAge, char* schoolName){
		age = studentAge;
		name = studentName;
		school = schoolName;
	}
	Student(){}
	void display(){
		cout << name << endl;
		cout << age << endl;
		cout << school << endl;
	}
};

void main(){
	Student s("Tejas Shah", 26, "Fr. Agnels");
	Teacher t;
	Person* p;
	p = &s;
	p->display();
	p = &t;
	p->display();
}
