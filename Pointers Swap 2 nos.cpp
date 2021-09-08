// Swapping of 2 numbers using pointers
#include <iostream>
#include<conio.h>
using namespace std;

// function declaration
void swap(int &x, int &y);

void main ()
{

   int firstValue = 100;
   int secondValue = 200;
 
   cout << "Before swap, first Value :" << firstValue << endl;
   cout << "Before swap, second Value :" << secondValue << endl << endl;
  
   swap(firstValue, secondValue);

   cout << "After swap, value of a :" << firstValue << endl;
   cout << "After swap, value of b :" << secondValue << endl;
   getch();
}

// function definition to swap the values.
void swap(int &x, int &y)
{
   int temp;
   temp = x;	
   x = y;		
   y = temp;	 

}

