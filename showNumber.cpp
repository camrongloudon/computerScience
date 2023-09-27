/*Write a program to enter a number and output the number.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
	float number;
	
	for (int x = 0;  x < 5; x++) {	
		printf("Enter a number: ");
		scanf("%f", &number);
		for (int x = 0; x < 5; x++) {
			printf("Your number is %5.2f", number);
			printf("\n");
		}
	}
	
	system("pause");
}
