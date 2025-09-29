///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Lab 6
//
//  I certify that the code below is my own work.
//  Emily Onyia RFY198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//Function to calculate dot product. a1*b1 + a2*b2.
double DotProduct(double a[], double b[], int n)
{
	double dot = (a[0] * b[0]) + (a[1] * b[1]) + (a[2] * b[2]);
	return dot;
}

//Function to calculate cross product.  (a2*b3 - a3*b2), (a1*b3 - a3*b1), (a1*b2 - a2*b1).
void CrossProduct(double a[3], double b[3], double result[3])
{
	double cross1 = ((a[1] * b[2]) - (a[2] * b[1]));
	double cross2 = ((a[0] * b[2]) - (a[2] * b[0]));
	double cross3 = ((a[0] * b[1]) - (a[1] * b[0]));

	result[0] = cross1;
	result[1] = cross2;
	result[2] = cross3;
}

// Test the DotProduct and CrossProduct functions
int main()
{
	double a[] = { 5, 1, 2 };
	double b[] = { 2, 3, 7 };
	printf("The dot product of [5, 1, 2] and [2, 3, 7] is %.1f\n",
		DotProduct(a, b, 3));
	double c[] = { 2, -2, -4 };
	printf("The dot product of [5, 1, 2] and [2, 2, -4] is %.1f\n",
		DotProduct(a, c, 3));

	// put the result of the cross product into vector d
	double d[3];
	CrossProduct(a, b, d);
	printf("The cross product of [5, 1, 2] and [2, 3, 7] is [%.1f, %.1f, %.1f]\n",
		d[0], d[1], d[2]);
	return 0;
}