// HCF and LCM of 2 numbers
#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
 //clrscr();
 /*int a,b,i,lcm=1,hcf=1,c,d;

 cout<<"Enter two numbers:";
 cin>>c>>d;
 a=c;
 b=d;

 for(i=2;i>0;++i)
 {
  A: if(a%i==0)
   lcm*=i;
    if(b%i==0)
    {
   b=b/i;
   if(a%i!=0)
   lcm*=i;
    }

    if(a%i==0)
   a=a/i;
    if(a==1&&b==1)
   break;
    if(a%i==0||b%i==0)
   goto A;
 }

 for(i=2;i>0;++i)
 {
     B: if(c%i==0&&d%i==0)
   hcf*=i;
  if(c%i==0)
   c=c/i;
  if(d%i==0)
   d=d/i;
  if(c%i==1&&d%i==1)
   break;
  if(c%i==0||d%i==0)
   goto B;
 }
 cout<<"\nLCM:"<<lcm;
 cout<<"\nHCF:"<<hcf;

 getch();*/
	int p,hcf,i,lcm, a,b; 
	cout<<"Enter two numbers and make sure the first number is smaller than the second:";
 cin>>a>>b;

	
	p=a*b;  
	for(i=1;i<=p;i++)     
	{ 
		if(a%i==0 && b%i==0)
			hcf =i;       
	}        lcm=p/hcf;       
	
	cout<<"The lcm is "<<lcm; 
	cout<<endl;        
	cout<<"The hcf is "<<hcf;
	 getch();
}

