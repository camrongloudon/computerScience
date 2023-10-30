//Insertion Sort

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void insertionsort(char arr[5][25], int size) {
	int i, j;
	char Ai[25];
	
	for (int i = 1; i < size; i++) {
		strcpy(Ai, arr[i]);
		j = i - 1;
		while(j >= 0 && strcmp(arr[j], Ai) == 1) {
			strcpy(arr[j + 1], arr[j]);
				j = j - 1;
		}
		strcpy(arr[j + 1], Ai);
	}
}

int main ( ) {
	char name[5][25];

	for (int x = 0; x < 5; x++) {
		printf("Enter a name: ");
		scanf("%s", &name[x]);
	}
	
	printf("ENTERED ARRAY \n");
	for (int x = 0; x < 5; x++) {
		printf("%s, ", name[x]);
	}	
	
	insertionsort(name, 5);

	printf("\n SORTED ARRAY \n");
	for (int x = 0; x < 5; x++) {
		printf("%s, ", name[x]);
	}
}
