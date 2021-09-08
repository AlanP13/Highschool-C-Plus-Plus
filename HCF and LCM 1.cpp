//Find HCF and LCM of two numbers
#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	int product, hcf, counter, lcm, number1, number2; 
	cout<<"Enter two numbers and make sure the first number is smaller than the second:";
	cin>>number1>>number2;	
	product = number1 * number2;

	for(counter = 1; counter <= product; counter++)     
	{ 
		if(number1 % counter==0 && number2 % counter==0)
			hcf = counter;       
	}       lcm = product / hcf;       
	
	cout<<"The lcm is "<<lcm; 
	cout<<endl;        
	cout<<"The hcf is "<<hcf;
	 getch();
}
/*
OUTPUT
Enter two numbers and make sure the first number is smaller than the second:7 10

The lcm is 70
The hcf is 1
*/

