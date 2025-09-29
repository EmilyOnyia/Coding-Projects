///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Homework 5
//
//  I certify that the code below is my own work.
//  Emily Onyia RFY 198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/////////////////////////////////////////////////////////////
#ifdef _GRADING_
// DO NOT CHANGE THIS LINE BELOW, IT'S NEEDED BY THE GRADING SYSTEM
char* filename = "..\\grades";
#else
// CHANGE THIS LINE BELOW ONLY IF NEEDED
char* filename = "grades";
#endif
/////////////////////////////////////////////////////////////

// Function that calculates the mean of int data[].
double mean(int data[], int count)
{
	double sum = 0;

	for ( int i = 0; i < count; i++)
		sum += data[i];

	return sum /= count;
}

//Function that calculates the standard deviation of int data[].
double stdDev(int data[], int count)
{
	double mu = mean(data, count);
	double sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum += (data[i] - mu) * (data[i] - mu);
	}
	sum /= count;
	return sqrt(sum);

}

// Main routine
int main() 
{
	// Declare an array of int
	int data[150];

	// Open the file for reading
	FILE* gradesFile = fopen(filename, "rt");
	if (!gradesFile)
	{
		printf("Unable to open file.");
		return 1;
	}

	int count = 0;
	while (!feof(gradesFile) && count < 150) // don't let array overflow
	{
		fscanf(gradesFile, "%i\n", &data[count++]);
	}

	// Close the file
	fclose(gradesFile);

	printf("There are %d grades in the file.\nThe mean is %.1f and the standard deviation is %.1f\n", 
		count, mean(data, count), stdDev(data, count));

	return 0;
}
