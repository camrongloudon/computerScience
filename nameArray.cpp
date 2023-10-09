//Scan in 5 names and print them using arrays

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
	char name[5][25];

	for (int x = 0; x <= 4; x++) {
		printf("Enter a name: ");
		scanf("%s", &name[x]);
	}	
	
	for (int x = 0; x <= 4; x++) {
		printf("%s", name[x]);
		printf("\n");
	}
}
