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

void selectionSortHigh(float arr[], char name[][25], int size) {
	for (int i = 0; i < size - 1; i++) {
		int smallest = i;
		for (int y = i + 1; y < size; y++) {
			if (arr[y] > arr[smallest])
				smallest = y;
		}
	int temp = arr[smallest];
	arr[smallest] = arr[i];
	arr[i] = temp;
	
	char tempName[25];
        strcpy(tempName, name[smallest]);
        strcpy(name[smallest], name[i]);
        strcpy(name[i], tempName);
	}
}
void selectionSortLow(float arr[], char name[][25], int size) {
	for (int i = 0; i < size - 1; i++) {
		int smallest = i;
		for (int y = i + 1; y < size; y++) {
			if (arr[y] < arr[smallest])
				smallest = y;
		}
	int temp = arr[smallest];
	arr[smallest] = arr[i];
	arr[i] = temp;
	
	char tempName[25];
        strcpy(tempName, name[smallest]);
        strcpy(name[smallest], name[i]);
        strcpy(name[i], tempName);
	}
}
int linearSearch(char arr[][25], int size, char key[25]) {
	for (int x = 0; x <= size; x++)
		if(strcmp(arr[x], key) == 0)
			return x;
	return -1;
}

int main ( ) {
	int passCount, failCount, loopCounter, position;
	char inputName[25], passedNames[100][25], failedNames[100][25], searchWord[25], allNames[100][25];
	float averageScore, passingGrade, passGrades[100], failGrades[100], allGrades[100];
	
	passCount = 0;
	failCount = 0;
	passingGrade = 50.0;
	loopCounter = 0; 

	printf("What is your name: ");
	scanf("%s", &inputName);
	
	while (strcmp(inputName, "end") != 0) {
		printf("What is your average score: ");
		scanf("%f", &averageScore);
		
		strcpy(allNames[loopCounter], inputName);
		allGrades[loopCounter] = averageScore; 

		if (averageScore >= passingGrade) {
			strcpy(passedNames[passCount], inputName);
			passGrades[passCount] = averageScore;
			passCount++;
		}
		else {
			strcpy(failedNames[failCount], inputName);
			failGrades[failCount] = averageScore;
			failCount++;
		}
		loopCounter++;
		printf("What is your name: ");
		scanf("%s", &inputName);	
		
	}
	
	printf("STUDENTS THAT PASSED BELOW!");
	selectionSortHigh(passGrades, passedNames, passCount);
	for (int x = 0; x <= passCount - 1; x++) {
		printf("\n");
		printf("%s: %5.2f", passedNames[x], passGrades[x]);
	}
	printf("\n \n");
	
	printf("STUDENTS THAT FAILED BELOW!");
	selectionSortLow(failGrades, failedNames, failCount);
	for (int x = 0; x <= failCount - 1; x++) {
		printf("\n");
		printf("%s: %5.2f", failedNames[x], failGrades[x]);
	}
	printf("\n \n");

	printf("Enter student NAME to search( type 0 to exit ): ");
	scanf("%s", &searchWord);
	while(strcmp(searchWord, "0") != 0) {
		position = linearSearch(allNames, loopCounter, searchWord);
		printf("%s: %5.2f", allNames[position], allGrades[position]);
		printf(" \n \n");	

		printf("Enter a student NAME to search( type 0 to exit ): ");
		scanf("%s", &searchWord);
	}

	printf(" \n \n \nGOODBYE! \n \n \n");	
	//明智人
}
