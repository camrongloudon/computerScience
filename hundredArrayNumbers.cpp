//ask for some numbers and store it in an array and output all the numbers and use -99 to stop

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
	int inputNumber, arrayNumber[100], counter;
		
	counter = 0; 
	
	printf("Enter a number: ");
	scanf("%d", &inputNumber);
	
	while ( inputNumber != -99 ) {
		arrayNumber[counter] = inputNumber;
		
		printf("Enter a number: ");
		scanf("%d", &inputNumber);
		
		counter++;
	}
	for (int x = 0; x <= counter - 1; x++) {
		printf("%d", arrayNumber[x]);
		printf("\n");
	}
}
