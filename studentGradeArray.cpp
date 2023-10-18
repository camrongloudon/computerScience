/* Ask for a student name and their grade. Output a list of all the students that passed and a list 
of all the students that failed(pass mark = 50) */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () { 
	int passCount, failCount;
	char inputName[15], passedList[100][15], failedList[100][15];
	float averageScore, passedGrade;
	
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
			passCount++;
		}
		else {
			strcpy(failedList[failCount], inputName);
			failCount++;
		}
		
		printf("What is your name: ");
		scanf("%s", &inputName);	
	}	
	
	printf("The following students PASSED: ");
	for (int x = 0; x <= passCount; x++) {
		printf("\n");
		printf("%s", passedList[x]);
	}
	
	printf("\n");

	printf("The following students FAILED: ");
	for (int x = 0; x <= failCount; x++) {
		printf("\n");
		printf("%s", failedList[x]);	
	}
}
