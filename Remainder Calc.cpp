/*Muhammad Hayyan
  23I-2041__CYS_A 
Assignment#03___Q1 */

#include<iostream>
using namespace std;

int main()
{
	//Program to find remainder without using modulus operator
	
	int num1, num2, rem;
	cout<< "\nEnter Two Numbers: ";						  //Takes input 
	cin>> num1>>num2;
	
	rem = num1-(num1/num2)*num2;						  //Formula to find remainder 
	cout<< "\nRemainder when "<<num1<<" is divided by "<<num2<<" is: "<<rem;  //outputs
	
	return(0);
}	

