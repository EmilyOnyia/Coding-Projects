///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Homework 3
//
//  I certify that the code below is my own work.
//  Emily Onyia RFY198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//Function that returns square root using Heron's Method
double Herons(double x)
{
	double y = x / 2.0;
	double eps = 0.00001;

	while (fabs(y * y - x) > eps)
	{
		y = 1.0 / 2.0 * (y + x / y);
	}
	return y;

}

int main()
{
	printf(" The square root of 30 is %.3f\n",
		Herons(30.0));

	printf(" The square root of 120 is %.3f\n",
		Herons(120.0));

	printf(" The square root of 195 is %.3f\n",
		Herons(195.0));

	printf(" The square root of 49 is %.3f\n",
		Herons(49.0));

	return 0;
}