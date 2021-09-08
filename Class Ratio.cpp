//To print decimal value and reciprocal of a fraction using a class ratio

#include <iostream>
using namespace std;

class Ratio
{
public:
	int numerator;
	int denominator;
	void displayRatio();
	void invert();
	float convertToDecimal();
};

	
void Ratio::displayRatio()
{
	cout << "The ratio is: " << numerator << "/" << denominator << endl;
}

void Ratio::invert()
{
	int temp = numerator;
	numerator = denominator;
	denominator = temp;
}

float Ratio::convertToDecimal()
{
	return (float)numerator/denominator;
}

void main()
{
	Ratio r;
	r.numerator = 5;
	r.denominator = 10;
	r.displayRatio();
	double decimal = r.convertToDecimal();
	cout << "Decimal value = " << decimal << endl;
	r.invert();
	r.displayRatio();
}