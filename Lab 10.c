///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Lab 10
//
//  I certify that the code below is my own work.
//  Emily Onyia RFY198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>

// Declare a Date structure
typedef struct
{
	int year, month, day;
} Date;

// Declare a Name structure
typedef struct
{
	char lastName[20];
	char firstName[20];
} Name;

// Write your compare functions below

//Function to compare two integers.
intCmp(int* a, int* b) {
	return *a - *b;
}

//Function to compare two dates.
dateCmp(Date* a, Date* b) {
	int d = (a->year, b->year);
	if (d == 0) {
		d = (a->month, b->month);
		}
	else if (d == 0) {
		d = (a->day, b->day);
	}
	return d;
}

//Function to compare two names.
nameCmp(Name* a, Name* b) {
	int t = _stricmp(a->lastName, b->lastName);
	if (t == 0) {
		t = _stricmp(a->firstName, b->firstName);
	}
	return t;
}


// "Helper" functions
// Prints "less than", "greater than", or "equals" based on integer input
void PrintCompare(int result)
{
	if (result < 0)
		printf(" is 'less' than ");
	else if (result > 0)
		printf(" is 'greater' than ");
	else
		printf(" equals ");
}

// Prints a Date structure
void PrintDate(Date* d)
{
	printf(" %i/%i/%i ", d->month, d->day, d->year);
}

// Prints a Name structure
void PrintName(Name* n)
{
	printf(" %s %s ", n->firstName, n->lastName);
}

// Code to test the compare functions
int main(void)
{
	int i1 = 39, i2 = -67;
	Date d1 = { 2023, 11, 6 }, d2 = { 2023, 12, 6 };
	Name n1 = { "Royster", "Maryann" }, n2 = { "Kolmetz", "Willard" };

	int result = intCmp(&i1, &i2);
	printf("%i", i1);
	PrintCompare(result);
	printf("%i\n", i2);

	result = dateCmp(&d1, &d2);
	PrintDate(&d1);
	PrintCompare(result);
	PrintDate(&d2);
	printf("\n");

	result = nameCmp(&n1, &n2);
	PrintName(&n1);
	PrintCompare(result);
	PrintName(&n2);
	printf("\n");

	return 0;
}
