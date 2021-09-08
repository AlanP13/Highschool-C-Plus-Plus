#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Person
{
public:
	string name;
	int age;
	Person(string n = "", int age = 0)
	{
		name = n;
		this->age = age;
	}
	void display()
	{
		cout << "Person: " << name << ", " << "Age: " << age << endl;
	}
};
void main()
{
	//Read a person
	Person p;
	cin >> p.name;
	cin >> p.age;

	//Add to file
	fstream data;
	data.open("person.dat", ios::app | ios::binary);
	data.write((char *)&p, sizeof(p));
	data.close();

	//Print all names from the file
	data.open("person.dat", ios::in | ios::binary);
	while (!data.eof())
	{
		data.read((char *)&p, sizeof(p));
		p.display();
		//cout << data.peek();
	}
	data.close();
}


/*
File mode parameters
ios::app - Append to the end of file
ios::ate - Go to end of file on opening
ios::binary - Binary file
ios::in - Open file for reading only
ios::out - Open file for writing only
ios::nocreate - Open fails if file does no exists
ios::noreplace - Open fails if file already exists
ios::trunc - Delete contents of file if exits


File pointer operations
seekg() - Moves get pointer to specified location
seekp() - Moves put pointer to specified location
tellg() - Gets the current location of get pointer
tellp() - Gets the current location of put pointer

seekg and seekp can also take parameters indicating direction, ios::beg, ios::cur, ios::end
*/