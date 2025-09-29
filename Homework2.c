///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Homework 2
//
//  I certify that the code below is my own work.
//  Emily Onyia RFY198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//Calculates the frequency of the 555 timer, given Ra, Rb, and C and gives back a value.
double frequency(double Ra, double Rb, double C) 
{
	double f = 1.44 / ((Ra + 2 * Rb) * C);
	return f;
}

//Function that calculates the duty cycle given Ra and Rb and gives back a value.
double dutyCycle(double Ra, double Rb)
{
	double d = Rb / Ra + 2 * Rb;
	return d;
}

int main()
{
	double freq;
	double dutyC;

	double Ra = 4.7e3;
	double Rb = 10e3;
	double C = 1e-6;

	//Testing each function
	freq = frequency(Ra, Rb, C);
	dutyC = dutyCycle(Ra, Rb);

	printf("Ra = %.1e\tRb = %.1e\tC = %.1e\tfrequency = %.2f\n",
		Ra, Rb, C, freq, dutyC);

	//Testing again with new values. Don't declare them twice.
	Ra = 10;
	Rb = 100;
	C = 1e-5;
	freq = frequency(Ra, Rb, C);
	dutyC = dutyCycle(Ra, Rb);

	printf("Ra = %.1e\tRb = %.1e\tC = %.1e\tfrequency = %.2f\n",
		Ra, Rb, C, freq, dutyC);

	return 0;
}