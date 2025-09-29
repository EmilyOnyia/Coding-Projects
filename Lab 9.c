///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Lab 9
//
//  I certify that the code below is my own work.
//  Emily Onyia RFY198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


//Function to swap the values of x and y and print their new values.
void swap(double* x, double* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	double x = 29.3;
	double y = 37.5;
	double* p = &x;
	printf("The value of x is %.1f\n", *p);

	p = &y;
	printf("The value of y is %.1f\n", *p);

	swap(&x, &y);
	printf("\nAfter swap:\n");
	printf("x = %.1f\n", x);
	printf("y = %.1f\n", y);

	return 0;
}
