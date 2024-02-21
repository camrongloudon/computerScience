#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct {
	char name[25];
	int grade1;
	int grade2;
	int grade3;
	float average;
}cardinfo;

int main (  ) {	
	cardinfo student[5];
	
	for(int x=0; x<5; x++) {
		printf("What is your name?: ");
		scanf("%s", &student[x].name);
	
		printf("Enter grade1: ");
		scanf("%d", &student[x].grade1);
	
		printf("Enter grade2: ");
		scanf("%d", &student[x].grade2);
	
		printf("Enter grade3: ");
		scanf("%d", &student[x].grade3);

		student[x].average = (student[x].grade1 + student[x].grade2 + student[x].grade3) / 3;
	}		
	
	for(int y=0; y<5; y++){
		printf("%s scored: %5.2f", student[y].name, student[y].average);
	}

}		
