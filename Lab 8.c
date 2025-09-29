///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Lab 8 
//
//  I certify that the code below is my own work.
//  Emily Onyia RFY198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

//Function that populates the array with the number of occurrences of each letter in the string.
void CountLetters(char str[], int freqCount[]) {
	
	//Clear count array after each cycle through loop so that count isn't carried over to next string.
	for (int i = 0; i < 26; i++) {
		freqCount[i] = 0;
	}

	for (int i = 0; i < strlen(str); i++) {
		//Changing every letter to uppercase.
		char c = toupper(str[i]);
		if (c >= 'A' && c <= 'Z') {
			freqCount[c - 'A']++;
		}

	}
}

//Function that prints the string and prints the count for each letter.
void PrintCount(char* str, int freqCount[]) {
	printf("Frequency count for \"%s\":\n", str);
	for (int i = 0; i < 26; i++) {
		printf("%c: %i\n", 'A' + i, freqCount[i]);
	}
	printf("\n\n");
}

int main() {
	char string1[] = "The quick brown fox jumps over the lazy dog";
	char string2[] = "Secret treasure in cave on snake island";

	//array to hold frequency count of letters
	int freqCount[26] = { 0 };

	//Letter frequency count on string 1
	CountLetters(string1, freqCount);
	PrintCount(string1, freqCount);

	//Letter frequency count on string 2
	CountLetters(string2, freqCount);
	PrintCount(string2, freqCount);

}