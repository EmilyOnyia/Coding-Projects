///////////////////////////////////////////////////////////////
//  
//
//
//  Quiz Game
//	Emily Onyia
// 
//  

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {
	//Quiz Game
	char questions[][100] = { "What is the largest planet in the solar system?",
	                          "What is the hottest planet?",
	                          "What planet has the most moons?",
	                          "Is the Earth flat?"};

	char options[][100] = { " A. Jupiter\n B. Uranus\n C. Saturn\n D. Neptune",
	                         " A. Mercury\n B. Venus\n C. Earth\n D. Mars",
	                        " A. Earth\n B. Mars\n C. Jupiter\n D. Saturn",
	                        " A. Yes\n B. No\n C. Maybe\n D. Sometimes"};

	char answerKey[] = {'A', 'B', 'D', 'B'};

	int questionCount = sizeof(questions) / sizeof(questions[0]);

	char guess = '\0';
	int score = 0;
	
	printf("***Astronomy Quiz Game***\n");

	for (int i = 0; i < questionCount; i++) {
		printf("\n%s\n", questions[i]);
		printf("%s\n", options[i]);
		//user input
		printf("\nEnter your choice : ");
		scanf(" %c", &guess);

		//Conver to uppercase so that lowercase answers are counted correct. ctype.h
		guess = toupper(guess);

		if (guess == answerKey[i]) {
			printf("CORRECT!\n");
			score++;
		}
		else {
			printf("WRONG!\n");
		}

	}
	printf("\n Your score is %d out of %d points\n", score, questionCount);

	//printf("%c", answerKey[3]);

	return 0;
}