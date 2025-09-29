///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Lab 1
//
//  I certify that the code below is my own work.
//  Emily Onyia and RFY198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//Function to calculate and print the area of a triangle to the screen
//A= 1/2 * base * height
void PrintTriangleArea(double base, double height) {
	double a = 0.5 * base * height;
	printf("The area of the triangle with base = % .2f and height = % .2f is % .2f\n",
		base , height , a); 
	return 0;
}
//Function to calculate and return the area as a value instead 
// of printing it.
double TriangleArea(double base, double height) {
	double a = 0.5 * base * height;
	return a;
}
int main(void) {
	//Below, we will call the TriangleArea function three different ways
	//with the same parameter values:

	//Here, we simply pass literal values (actual numbers) to the function
	// and print the result.
	double area = TriangleArea(3, 5);
	printf("The area of the triangle with base = %.2f and height = %.2f is %.2f\n",
		3.0, 5.0, area);

	//This time, we declare variables base and height and give them the
	//same value as above. The function prints the results.
	double base = 3;
	double height = 5;
	PrintTriangleArea(base, height);

	//Notice that the variables used don't need to be the same names as
	//the function parameters.
	double b = 3;
	double h = 5;
	PrintTriangleArea(b, h);
	return 0;
}

