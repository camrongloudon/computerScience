/* 
	there is a class of unknown numbers of students the information given are: students name and their grade average. 
	the administration needs a list of names of all students who passed their end of term exam. ordered from highest grade to lowest. 
	the administration also needs a list of names of all the students that failed. ordered from lowest grade to highest. 
	the program also needs to facilitate the admin entering a student's name and finding their average. 
	4 arrays to deal with*
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void insertionSortHigh(float arr[], char name[][15], int size) { 
	int i, j;
	
	for (int i = 1; i < size; i++) {
		int Ai = arr[i]; 
		j = i - 1;
		while(j >= 0 && arr[j] < Ai) {
			arr[j + 1] = arr[j];
			j = j - 1;
		} 
		arr[j + 1] = Ai;
	}
}
void insertionSortLow(float arr[], char name[][15], int size) { 
	int i, j;
	
	for (int i = 1; i < size; i++) {
		int Ai = arr[i]; 
		j = i - 1;
		while(j >= 0 && arr[j] > Ai) {
			arr[j + 1] = arr[j];
			j = j - 1;
		} 
		arr[j + 1] = Ai;
	}
}
int linearSearch(char arr[][25], int size, char key[25]) {
	for (int x = 0; x <= size; x++)
		if(strcmp(arr[x], key) == 0)
			return x;
	return -1;
}

int main ( ) {
	int passCount, failCount, position;
	char inputName[15], passedList[100][15], failedList[100][15], searchWord[25];
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
	
	insertionSortHigh(passArray, passedList, passCount);
	insertionSortLow(failArray, failedList, failCount);
	
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
//
	printf("Please enter a NAME to search: ");
	scanf("%s", &searchWord);
	
	position = linearSearch(passArray, passCount, searchWord);
	if (position = -1)
		printf("There is no student by that name!");
	else {
		printf("%s : %d", passedList[position], passArray[position]);
		
	}	
}

