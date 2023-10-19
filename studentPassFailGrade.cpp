/* Ask for a student name and their grade. Output a list of all the students that passed and a list 
of all the students that failed(pass mark = 50) */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () { 
	int passCount, failCount;
	char inputName[15], passedList[100][15], failedList[100][15];
	float averageScore, passedGrade, passArray[100], failArray[100];
	
	passCount = 0;
	failCount = 0;
	passedGrade = 50.0;
	
	printf("What is your name: ");
	scanf("%s", &inputName);
	
	while (strcmp(inputName, "end") != 0) {
		printf("What is your average score: ");
		scanf("%f", &averageScore);
		
		if (averageScore >= passedGrade) {
			strcpy(passedList[passCount], inputName);
			passArray[passCount] = averageScore;
			passCount++;
		}
		else {
			strcpy(failedList[failCount], inputName);
			failArray[failCount] = averageScore;
			failCount++;
		}
		
		printf("What is your name: ");
		scanf("%s", &inputName);	
	}	
	
	printf("The following students PASSED: ");
	for (int x = 0; x <= passCount - 1; x++) {
		printf("\n");
		printf("%s: %5.2f", passedList[x], passArray[x]);
	}
	
	printf("\n");
	printf("\n");

	printf("The following students FAILED: ");
	for (int x = 0; x <= failCount - 1; x++) {
		printf("\n");
		printf("%s: %5.2f", failedList[x], failArray[x]);	
	}
}
