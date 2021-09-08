//Find HCF and LCM of two numbers
#include<iostream>
using namespace std;
void main ()
{
	int a,b,c;
	cout<<"Enter the first value"<<endl;
	cin>>a;
	cout<<"Enter the second value"<<endl;
	cin>>b;
	c=a*b;
	while(a!=b)
	{ if(a>b)
	  a=a-b;
	else
	  b=b-a;
	}
	cout<<"HCF is"<<a<<endl;
	cout<<"LCM is"<<c/a;
}
/*
OUTPUT
Enter the first value
7
Enter the second value
10
HCF is1
LCM is70Press any key to continue . . .
*/