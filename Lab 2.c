///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Lab 2
//
//  I certify that the code below is my own work.
//  Emily Onyia RFY198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//Function to evaluate a quadratic equation
double EvalQuadratic(double a, double b, double c, double x) {
	double Q = (a * x * x) + (b * x) + (c);
	
	return Q;
}
//Evaluate the given equations
int main() {
	printf("For x = 17, 3x^2 + 2x - 3 = %.2f\n",
		EvalQuadratic(3, 2, -3, 17));
	printf("For x = 3.1, x^2 - 1.7x + 5.4 = %.2f\n",
		EvalQuadratic(1, -1.7, 5.4, 3.1));
	printf("For x = -2.1, 1.5x^2 + 3.1x - 2.8 = %.2f\n",
		EvalQuadratic(1.5, 3.1, -2.8, -2.1));

	return 0;
}