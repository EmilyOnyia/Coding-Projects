///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Homework 4
//
//  I certify that the code below is my own work.
//  Emily Onyia RFY198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//Function to determine if a number is prime or not.
int isPrime(int n)
{
	if (n%2==0)
	{
		return 0;
	}
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int num[] = { 19, 36, 47, 69, 129, 151 };
	
	for (int i = 0; i < 6; i++)
	{
		if (isPrime(num[i]))
		{
			printf("%i is Prime.\n", num[i]);
		}
		else {
			printf("%i is not Prime\n", num[i]);
		}
	}

}