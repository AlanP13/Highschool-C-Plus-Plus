// Exponential function
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void main()
{
	double x, n, result = 0; 
	cout << "Enter the number : "; 
	cin >> x;
	cout<<"Enter the power : ";
	cin>>n;
      
	result=pow(x,n);
	
	cout<<"The answer is "<< result; 

	getch(); 
}

/*OUTPUT
Enter the number : 5
Enter the power : 3
The answer is 125
*/