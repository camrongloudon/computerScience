//write a program to ask for a student's name and age. output the student's name and age

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct node {
	int age, grade1, grade2, grade3;
	char name[15];
	struct node *next;
}Node, *Nodeptr;

Nodeptr Makenode(char name[], int grade1, int grade2, int grade3) {
	Nodeptr np = (Nodeptr)malloc(sizeof(node));
	strcpy(np -> name, name);
	np -> grade1 = grade1;
	np -> grade2 = grade2;
	np -> grade3 = grade3;
	np -> next= NULL;
	return np;
}

Nodeptr addfront (Nodeptr head, char name[15], int grade1, int grade2, int grade3) {
	Nodeptr np = Makenode(name, grade1, grade2, grade3);
	np -> next = head;
	head = np;
	return head;
}

void printlist(Nodeptr curr) {
	while(curr != NULL){
		printf("%s \n", curr -> name );
		printf("%d \n", curr -> grade1 );
		printf("%d \n", curr -> grade2 );
		printf("%d \n", curr -> grade3 );
		curr = curr -> next;
	}
}

int main () {
	Nodeptr head = NULL;
	char name[25];
	int age, grade1, grade2, grade3;
	float average;

	printf("Enter student name: ");
	scanf("%s", &name);

	printf("Grade 1: ");
	scanf("%d", &grade1);

	printf("Grade 2: ");
	scanf("%d", &grade2);
	
	printf("Grade 3: ");
	scanf("%d", &grade3);
	
	average = (grade1 + grade2 + grade3) / 3;
	
	head = addfront(head, name, grade1, grade2, grade3);

	printlist(head);
	printf("\nAverage grade: %5.2f", average);
}
