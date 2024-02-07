#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ( ) {
	int passCount, failCount, p, l;
	char inputName[15], passedList[100][15], failedList[100][15];
	float grade, passedGrade, passArray[100], failArray[100];

//	FILE *pass = fopen("passed.txt", "w");
//	FILE *fail = fopen("failed.txt", "w");
	FILE *pass = fopen("passed.txt", "r");
	FILE *fail = fopen("failed.txt", "r");
		
	passCount = 0;
	failCount = 0;
	passedGrade = 50.0;
	
//	printf("What is your name: ");
	fscanf("%s", &inputName);
	
	while (strcmp(inputName, "end") != 0) {
		printf("What is your grade: ");
		fscanf("%f", &grade);
		
		for (int x = 0; x <= 2; x++) {
			fscanf(pass, "%f", &passedGrade[x])
		}
		for (int x = 0; x <= 2; x++) {
			fscanf(fail, "%f", &faileddGrade[x])
		}		

	
//		printf("\nWhat is your name: ");
		fscanf("%s", &inputName);		
	}
//	printf("NAMES OF STUDENTS WHO passed WRITTEN TO THE pass\ FILE");
//	for (int x = 0; x <= passCount - 1; x++) {
//		printf("\n");
//		fprintf(pass, "%s\n", passedList[x]);
//	}
//	
//	printf("NAMES OF STUDENTS WHO failed WRITTEN TO THE fail FILE");
//	for (int x = 0; x <= failCount - 1; x++) {
//		printf("\n");
//		fprintf(fail, "%s\n", failedList[x]);
//
//	}
//
//	fclose(pass);
//	fclose(fail);
}
