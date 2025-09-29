/////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Homework 7
//  Emily Onyia RFY198

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

// Define a structure for the used cars
typedef struct
{
	char Model[20];
	int Year;
} Car;

//Function to compare the Name and year of two cars
int carCmp(Car* c1, Car* c2)
{
	int t = strcmp(c1->Model, c2->Model);

	if (t!= 0)
		return t;
	return c1->Year - c2->Year;
}

//Function to swap car 1 and car 2
void carSwap(Car* c1, Car* c2)
{
	Car temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

//Function to sort cars in car data array.
void ExchangeSort(Car data[], int count)
{
	for (int i = 0; i < count - 1; i++) {
		for (int j = i+1; j < count; j++) {
			if (carCmp(&data[i], &data[j])>0) {
				carSwap(&data[i], &data[j]);
			}

		}
	}
}

//Function to search for a specific car
int BinarySearch(Car data[], int count, Car find)
{
	int hi = count - 1;
	int lo = 0;
	while (hi > lo) {
		int mid = (hi + lo) / 2;
		if (carCmp(&find, &data[mid]) == 0) {
			return mid;
		}
		else if (carCmp(&find, &data[mid]) < 0) {
			hi = mid - 1;
		}
		else
			lo = mid + 1;

	}
	return -1;
}

// Main function to test everything
int main()
{
	// Create some data
	Car data[] = { "Ford", 1998,
		"Chevy", 2004,
		"Dodge", 2017,
		"Audi", 1996,
		"Dodge", 2002,
		"VW", 2017,
		"Ford", 2009,
		"Dodge", 2012,
		"Chevy", 2008,
		"Audi", 2007,
		"Ford", 2018 };

	int count = sizeof(data) / sizeof(Car);

	// Print the data before sorting
	printf("Before sort:\n");
	for (int i = 0; i < count; i++)
		printf("%s %i\n", data[i].Model, data[i].Year);

	// Sort the data
	ExchangeSort(data, count);

	// Print the data after sorting
	printf("\nAfter sort:\n");
	for (int i = 0; i < count; i++)
		printf("%s %i\n", data[i].Model, data[i].Year);

	// Look for a 2016 Dodge
	Car find = { "Dodge", 2016 };
	int index = BinarySearch(data, count, find);
	if (index >= 0)
		printf("\nThe %i %s was found at index %i\n", find.Year, find.Model, index);
	else
		printf("The %i %s was not found\n", find.Year, find.Model);

	// Look for a 2007 Audi
	strcpy(find.Model, "Audi");
	find.Year = 2007;
	index = BinarySearch(data, count, find);
	if (index >= 0)
		printf("\nThe %i %s was found at index %i\n", find.Year, find.Model, index);
	else
		printf("The %i %s was not found\n", find.Year, find.Model);

	return 0;
}