//Program 1D: Program to reverse a string using call by reference

#include<iostream>
#include<string>
using namespace std;

void stringReverse(string* inputString){
	int length = inputString.length();
	for (int i = 0; i < length/2; i++)	{
		char temp = inputString[0][i];
		inputString[0][i] = inputString[0][length-1-i];
		inputString[0][length-1-i] = temp;
	}
}

void main(){
	string inputString;
	cout << "Enter the string to reverse: ";
	getline (cin, inputString);
	stringReverse(&inputString);
	cout << "The reversed string is: " << inputString << endl;
}