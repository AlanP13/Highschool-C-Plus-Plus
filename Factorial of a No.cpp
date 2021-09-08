// Factorial of a number
#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	int fact = 1, number; 
	cout << "Enter the number : "; 
	cin >> number; 
	
	for(int counter = 1; counter <= number; counter++) 
	{ 
		fact = fact * counter; 		
	}

	cout<<"The factorial is "<< fact; 

	getch(); 
}

/*OUTPUT
Enter the number : 5
The factorial is 120
*/