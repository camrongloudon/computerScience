//write a program to ask for a student's name and age. output the student's name and age

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct node {
	int age;
	char name[15];
	struct node *next;
}Node, *Nodeptr;

Nodeptr Makenode(char name[], int age) {
	Nodeptr np = (Nodeptr)malloc(sizeof(node));
	strcpy(np -> name, name);
	np -> age = age;
	np -> next= NULL;
	return np;
}

Nodeptr addfront (Nodeptr head, char name[15], int age) {
	Nodeptr np = Makenode(name, age);
	np -> next = head;
	head = np;
	return head;
}

void printlist(Nodeptr curr) {
	while(curr != NULL){
		printf("%s \n", curr -> name );
		printf("%d \n", curr -> age );
		curr = curr -> next;
	}
}

int main () {
	Nodeptr head = NULL;
	char name[25];
	int age;
	
	printf("Enter student name: ");
	scanf("%s", &name);
	
	printf("Enter student age: ");
	scanf("%d", &age);
	
	head = addfront(head, name, age);
	
	printlist(head);
}
