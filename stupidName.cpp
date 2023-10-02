/* Write a program to ask someone for their name tell them they have a stupid name */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ( ) {

char name [25];

printf("Enter your name: ");
scanf("%s", name);
printf("\n");
	
while (strcmp(name, "end") != 0) {
	printf("%s, is a stupid name !!!", name);
	printf("\n");
	
	printf("Enter your name: ");
	scanf("%s", name);
	printf("\n");
}

system("pause");
}
