//Working with Files in C++
#include <fstream>
#include <string>
using namespace std;
class Country
{
public:
	string name;
	string capital;
	Country(string n = "", string c = "")
	{
		name = n;
		capital = c;
	}
	void display()
	{
		cout << "Country: " << name << ", " << "Capital: " << capital << endl;
	}
};
void main()
{
	Country c;
    fstream country;
	fstream capital;
	country.open("c://country.dat", ios::in);
	capital.open("c://capital.dat", ios::in);
	while (getline(country, c.name) && getline(capital, c.capital))
	{
		c.display();
	}
}