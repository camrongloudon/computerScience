//Insertion Sort

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void insertionsort(char arr[][25], int size) {
	int i, j;
	
	for (int i = 1; i < size; i++) {
		char Ai[0][25];
		strcpy(Ai[0], arr[i]);
		j = i - 1;
		while(j >= 0 && strcmp(arr[j], Ai[0]) == -1) {
			arr[j + 1] = arr[j];
				j = j - 1;
		} 
		arr[j + 1] = Ai[0];
	}
}

int main ( ) {
//	int num[ 15 ];
//
//	for (int x = 0; x < 5; x++) {
//		printf("Enter a number: ");
//		scanf("%d", &num[x]);
//	}
//	printf("ENTERED ARRAY \n");
//	for (int x = 0; x < 5; x++) {
//		printf("%d, ", num[x]);
//	}	
//	
//	insertionsort(num, 5);
//
//	printf("\n SORTED ARRAY \n");
//	for (int x = 0; x < 5; x++) {
//		printf("%d, ", num[x]);
//	}

}
