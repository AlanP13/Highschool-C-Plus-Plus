// Print the start , end address of the elements of the array along with the sum
#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	int numbers[10] = {45, 12, 9, 44,643, 96, 64, 81, 90, 8000};
	int *ptr, sum = 0, counter;
	ptr = numbers;
	cout<<"\n Starting Address \t size \t ending address \t value of sum ";

	for (counter = 0; counter < 10; counter++)
	{
		sum = sum + *ptr;
		cout<< "\n\n " << ptr << " \t \t " << sizeof(*ptr) << " \t ";
		ptr= ptr + 1;
		cout << ptr << " \t \t " << sum;
	}
	getch();
}

/* OUTPUT:

 Starting Address        size    ending address          value of sum

 001DF934                4       001DF938                45

 001DF938                4       001DF93C                57

 001DF93C                4       001DF940                66

 001DF940                4       001DF944                110

 001DF944                4       001DF948                753

 001DF948                4       001DF94C                849

 001DF94C                4       001DF950                913

 001DF950                4       001DF954                994

 001DF954                4       001DF958                1084

 001DF958                4       001DF95C                9084
*/