// Bubble sort
#include <iostream>
#include<conio.h>
using namespace std;

void main()
{
	int numbers[10] = {4567, 12, 9, 44, 643, 96, 64, 81, 8000, 90};
	int i, j, t, k;

	cout<<"The array list  before sorting is " <<endl;

	for (i = 0; i < 10; i++)
	{
		cout << numbers[i] << " ";
	}

	for (k = 0; k < 10; k++)
	{
		for (j = 0; j < (10 - k)- 1; j++)    // array length - 1
		{
			if(numbers[j] > numbers[j + 1])
			{
				t = numbers[j];
				numbers[j] = numbers [j +1];
				numbers [j +1] = t;
			}
		}		
	}	

	cout<< endl <<"The array list  after sorting is " <<endl;


	for (i = 0; i < 10; i++)
	{
		cout << numbers[i] << " ";
	}

	getch();
}

/*
The array list  before sorting is
4567 12 9 44 643 96 64 81 8000 90
The array list  after sorting is
9 12 44 64 81 90 96 643 4567 8000
*/