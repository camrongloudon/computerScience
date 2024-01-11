#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ( ) {
	int position;
	float timeTaken;
	char name[20];
	
	printf("Athlete Name: ");
	scanf("%s", &name);
	
	printf("Athlete Time: ");
	scanf("%f", &timeTaken);	
	
	printf("%s took %5.4f to finish the race!", name, timeTaken);

}
