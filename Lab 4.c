///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Lab 4
//
//  I certify that the code below is my own work.
//  Emily Onyia RFY198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//An if/else statement function to sort and convert numeric grades into letter grades

void ConvertGrade(int numericGrade) {
	if (numericGrade < 60) {
		printf("%i = F\n", numericGrade);
	}
	else if (numericGrade >= 60 && numericGrade <= 69) {
		printf("%i = D\n", numericGrade);
	}
	else if (numericGrade >= 70 && numericGrade <= 79) {
		printf("%i = C\n", numericGrade);
	}
	else if (numericGrade >= 80 && numericGrade <= 89) {
		printf("%i = B\n", numericGrade);
	}
	else {
		printf("%i = A\n", numericGrade);
	}
}

//Test Function in main
int main(void) {
	ConvertGrade(84);
	ConvertGrade(96);
	ConvertGrade(73);
	ConvertGrade(62);
	ConvertGrade(101);
	ConvertGrade(88);
	ConvertGrade(91);

	return 0;
}