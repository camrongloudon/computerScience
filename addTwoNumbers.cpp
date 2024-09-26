#include<stdio.h>
#include<stdlib.h>

int main( ) {
	int num1, num2, num3;
	int *pointer;
	
	num1 = 5;
	num2 = 10;
	num3 = num1 + num2;

	printf("%d \n", num3);
	printf("This is the answer %d \n", num3);
	printf("What is this %d \n", &num3);
	
	pointer = &num3;

	printf("Printing the pointer %d \n", *pointer);
	printf("Printing the pointer %d", &pointer);

}
