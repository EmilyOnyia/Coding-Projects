///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Homework 9
//
//  I certify that the code below is my own work.
//  Emily Onyia RFY198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

// These are simulated registers. In an actual embedded system, they
// would not be simple variables in this file, but they would behave
// the same way.
int ADCON1 = 0x3e;
int ADRESH = 0x35;
int ADRESL = 0xd5;

void setADCS(int adcs)
{
	adcs <<= 2;
	ADCON1 &= 0xf1; //1111 0001
	ADCON1 |= adcs;

}

void setADFM(int adfm)
{
	adfm << 0;
	ADCON1 &= 0xfe; //1111 1110
	ADCON1 |= adfm;
}

void setADNREF(int adnref)
{
	adnref << 5;
	ADCON1 &= 0x9f; //1001 1111
	ADCON1 |= adnref;
}

void setADPREF(int adpref)
{
	adpref << 7;
	ADCON1 &= 0x7f; //0111 1111
	ADCON1 |= adpref;
}

int readADRES(void)
{
	int adres = ADRESL >> 4;
	adres | = ADRESH << 2;
}

// Test the above functions.
int main()
{
	// Print value of ADCON1 before and after various operations
	printf("ADCON1: 0x%0x\n", ADCON1);

	// Set the ADCS to 5
	setADCS(5);
	printf("ADCON1: 0x%0x\n", ADCON1);

	// Set the ADPREF to 2
	setADPREF(2);
	printf("ADCON1: 0x%0x\n", ADCON1);

	// Set the ADNREF to 1
	setADNREF(1);
	printf("ADCON1: 0x%0x\n", ADCON1);

	// Print value of ADRES
	printf("ADRES:  0x%04x\n", readADRES());

	return 0;
}