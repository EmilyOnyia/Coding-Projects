///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Homework 8
//
//  I certify that the code below is my own work.
//  Emily Onyia RFY198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

const double PI = 3.14159265359;

// A numerical integration function that finds the definite integral of any function.
double NumIntegrate(double(*func)(double), double lower, double upper, double stepSize) 
{
	double sum = 0;
	for (double x = lower; x < upper; x += stepSize) {
		sum += func(x);
	}
	return sum * stepSize;
}

//Functions for each expression that returns the expression as f(x).
double A(double x) {
	return 3*(x * x) - 7*x + 15;
}
double B(double x) {
	return 3 * cos(3 * x) - 4 * sin(2 * x);
}
double C(double x) {
	return 4 * sqrt(1 - (x * x));
}
double D(double x) {
	return exp(-x * x);
}

int main()
{
	double resultsA = NumIntegrate(A, 3.1, 5.7, .00001);
	printf("The integral of A: %.5f\n", resultsA);

	double resultsB = NumIntegrate(B, -PI / 4, PI / 4, .00001);
	printf("The integral of B: %.5f\n", resultsB);

	double resultsC = NumIntegrate(C, 0, 1, .00001);
	printf("The integral of C: %.5f\n", resultsC);

	double resultsD = NumIntegrate(D, -15, 15, .00001);
	printf("The integral of D: %.5f\n", resultsD);

	return 0;
	
}