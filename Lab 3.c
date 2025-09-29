///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Lab 3
//  This assignment illustrates a for() loop to generate Fibonacci numbers.
// 
//  I certify that the code below is my own work.
//  Emily Onyia Rfy198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//Function to calculate and print Fibonacci numbers to the Nth 
//Fibonacci number.
void Fibonacci(int N)
{
	int f1 = 0;
	int f2 = 1;
	printf("%d\n", f1);
	printf("%d\n", f2);

	for (int i = 3; i <= N; i++)
	{
		int f = f1 + f2;
		printf("%i\n", f);

		f1 = f2;
		f2 = f;
	}
}


int main(void)
{
	//Print the first 30 Fibonacci numbers
	Fibonacci(30);
	return 0;
}
