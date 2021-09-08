//To print the Fibonacci series less than n
#include<iostream>
#include<conio.h>
using namespace std;
int cal(int n);
void main()
{	int numbers;
	cout << "Enter the number of terms you want to see: ";
	cin >> numbers;

	cal(numbers);
	_getch();}
int cal(int n)
{
	int firstNumber = 0, secondNumber = 1, sum = 0;
	cout << firstNumber << " " << secondNumber << " ";
	for (int i = 0; i < n; i++)
	{	mylabel:
		sum = firstNumber + secondNumber;
		if (sum <= n)
		{   cout << " " << sum << " ";
			firstNumber = secondNumber;
			secondNumber = sum;}
		else goto mylabel;}
	return(0);}
/* Output:
Enter number of terms for Series: 35
Fibonacci series are:
0 1 1 2 3 5 8 13 21 34
*/
