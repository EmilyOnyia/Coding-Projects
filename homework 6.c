///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Homework 6
//
//  I certify that the code below is my own work.
//  Your name and UTSA ID

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

typedef struct
{
	int month, day, year;
}
Date;

//Function that takes a date parameter and prints the date in mm/dd/yyyy format
void PrintDate(Date d)
{
	printf("%02i/%02i/%04i", d.month, d.day, d.year);
}

//Function that determines if a year is a leap year.
int isLeapYear(int year)
{
	if (year % 400 == 0) {
		return 1;
	}
	else if (year % 100 == 0) {
		return 0;
	}
	else if (year % 4 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

//Function that returns the number of days in the month that a certain date falls on.
int DaysInMonth(Date d)
{
	int months[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (isLeapYear(d.year)) {
		if(d.month == months[1]) {
			daysInMonth[1] += 1;
		}
	}
	return daysInMonth[d.month - 1];

	
}

//Function that adds a given number of days to a date.
Date AddDaysToDate(Date d, int days)
{
	d.day += days;
	//while d.day > days in month, subtract days in month and add 1 to d.month and change year accordingly
	//while d.day < 1, add days in month of previous month and sunbtract 1 from d.month and change year accordingly
	
	while (d.day > DaysInMonth(d))
	{
		d.day -= DaysInMonth(d);
		d.month += 1;
		if (d.month > 12) {
			d.month -= 12;
			d.year += 1;
		}
	}
	while (d.day <1) 
	{
		d.month -= 1;
		if (d.month < 1) {
			d.year -= 1;
			d.month += 12;
		}
		d.day += DaysInMonth(d);

	}
	return d;
}


int main(void)
{
	// Create arrays with dates and days to add to them
	Date dates[] = { {10, 31, 2024}, {10, 31, 2024}, {10, 1, 2024},
	{1, 1, 2020}, {10, 18, 2024} };
	int daysToAdd[] = { 10, -10, -180, 365, 10217 };
	// Loop through the dates and print the results
	for (int i = 0; i < sizeof(dates) / sizeof(Date); i++)
	{
		printf("Original date ");
		PrintDate(dates[i]);
		printf(" %+i days is ", daysToAdd[i]);
		PrintDate(AddDaysToDate(dates[i], daysToAdd[i]));
		printf("\n");
	}
	return 0;
}