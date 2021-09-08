// Print the array and find Maximum of numbers
#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	int numbers[10] = {45, 12, 9, 44,643, 96, 64, 81, 90, 8000};
	int maxNumber;
	int counter;
	maxNumber= numbers[0];
	cout<<"The array list  is " <<endl;

	for (counter = 0; counter < 10; counter++)
	{
		cout<< numbers[counter]<< " ";
	}

	for (counter = 1; counter < 10; counter++)
	{
		if (maxNumber < numbers[counter])
		{
			maxNumber = numbers[counter];
		}		
	}

	
	cout<< endl << "The maximun number is " << maxNumber;
	getch();
}

/* OUTPUT:
The array list  is
45, 12, 9, 44,643, 96, 64, 81, 90, 8000
The maximun number is 8000           
*/