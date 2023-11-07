/* Ask for 2 numebrs, multiply them and output the product */

#include<stdio.h>
#include<stdlib.h>

void productMaker(int num1, int num2) {
	int answer;
	answer = num1 * num2;
	printf("%d x %d = %d", num1, num2, answer);
}

int productMaker2(int num1, int num2) {
	int answer;
	answer = num1 * num2;
	return answer;
}

int main () {
	int number1, number2, product;
	
	printf("Enter 2 numbers: \n");
	scanf("%d %d", &number1, &number2);
//	
//	productMaker(number1, number2);
	product = productMaker2(number1, number2);
	
	printf("%d * %d = %d", number1, number2, product);
}
