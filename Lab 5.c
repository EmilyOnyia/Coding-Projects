///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Lab 5
//
//  I certify that the code below is my own work.
//  Emily Onyia RFY198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


// A Function that evaluates a polynomial passed as an array

double evalPoly(double coeffs[], int order, double x)
{
	double y = 0.0;

	for (int i = 0; i <= order; i++)
	{
		y += coeffs[i] * pow( x, order - i);

	}
	return y;
}

// Evaluate the given values
int main()
{
	double a[] = { 5, -17 };
	double b[] = { -1.7, 0, -3, 0.1, 3.5 };
	double c[] = { 2, -3, 4, -5, 6, -7, 8 };
	double d[] = { 3.2, 0, 0, 0,-2 };

	printf("y = %.1f\n", evalPoly(a, 1, 3.1));
	printf("y= %.1f\n", evalPoly(b, 4, -1.2));
	printf("y = %.1f\n", evalPoly(c, 6, 3));
	printf("y = %.1f\n", evalPoly(d, 4, 1.3));

	return 0;
}