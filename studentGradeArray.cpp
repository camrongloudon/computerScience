/* Ask for a student name and their grade. Output a list of all the students that passed and a list 
of all the students that failed(pass mark = 50) */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ( ) {
	char inputName[15], arrayName[100][15];
	int counter, passed[100], failed[100], passMark;
	float grade;
	
	counter = 0;
	passMark = 50; 
	
	printf("What is your name: ");
	scanf("%s", &inputName);
	
	printf("What is your average grade: ");
	scanf("%f", &grade);
	
	strcpy( arrayName[counter], inputName );
	while ( strcmp(inputName, "end") != 0 ) {
		
		if ( grade >= 50 ) 
			passed[counter] = grade;
		else {
			failed[counter] = grade;
			counter++;			
		}
		
		printf("What is your name: ");
		scanf("%s", &inputName);
		
		printf("What is your average grade: ");
		scanf("%f", &grade);
	}

	
}
