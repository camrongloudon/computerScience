/* Write a program to ask for 2 deciaml numbers, divde them and output the answer. */ 
#include<stdlib.h>
#include<stdio.h>

int main () {

	float num1, num2, quo;

	printf("Enter a Number: ");
	scanf("%f", &num1);

	printf("Enter another Number: ");
	scanf("%f", &num2);

	quo = num1/num2;
	
	printf("%5.2f", quo);	
	printf("\n"); 
	
	system("pause");
}
