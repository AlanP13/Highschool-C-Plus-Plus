//Program to print values of an integer array using pointers

#include<iostream>
using namespace std;

void main()
{
	const int size = 10;
	int a[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int* p = a;
	
	cout << "Printing the array using pointers..." << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *p+i;
		if (i != size - 1) cout << ", ";
	}
	cout << endl;
}
void F(int i)
{
   int A1[10];
   int *A2 = new int [10];
   …
   G(A1);
   G(A2);
}

return-value-type  function-name( parameter-list )
{   
	declarations and statements
} 


