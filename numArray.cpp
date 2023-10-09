//Scan in 10 numbers and print them using arrays

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
	int num[ 10 ];

	for (int x = 0; x <= 9; x++) {
		printf("Enter a number: ");
		scanf("%d", &num[x]);
	}	
	
	for (int x = 0; x <= 9; x++) {
		printf("%d", num[x]);
		printf("\n");
	}
}
