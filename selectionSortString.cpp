// Use selection sort to sort an array of names in alphabetical order. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void selectionsort(char arr[][25], int size) {
	for (int i = 0; i < size - 1; i++) {
		int smallest = i;
		for (int y = i + 1; y < size; y++) {
			if (strcmp(arr[y], arr[smallest]) == -1)
				smallest = y;
		}
		char temp[1][25];
		strcpy(temp[0], arr[smallest]);
		strcpy(arr[smallest], arr[i]);
		strcpy(arr[i], temp[0]);
	}
}

int main ( ) {
	char name[2][25];

	for (int x = 0; x < 2; x++) {
		printf("Enter some NAMES: ");
		scanf("%s", &name[x]);
	}
	
	printf("ENTERED ARRAY \n");
	for (int x = 0; x < 5; x++) {
		printf("%s, ", name[x]);
	}	
	
	selectionsort(name, 2);

	printf("\n SORTED ARRAY \n");
	for (int x = 0; x < 2; x++) {
		printf("%s, ", name[x]);
	}

}
