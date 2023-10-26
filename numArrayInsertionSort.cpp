//Insertion Sort

#include <stdio.h>
#include <stdlib.h>

void insertionsort(int arr[], int size) {
	int i, j;
	
	for (int i = 1; i < size; i++) {
		int Ai = arr[i];
		j = i - 1;
		while(j >= 0 && arr[j] > Ai) {
			arr[j + 1] = arr[j];
				j = j - 1;
		} 
		arr[j + 1] = Ai;
	}
}

int main ( ) {
	int num[ 15 ];

	for (int x = 0; x < 5; x++) {
		printf("Enter a number: ");
		scanf("%d", &num[x]);
	}
	printf("ENTERED ARRAY \n");
	for (int x = 0; x < 5; x++) {
		printf("%d, ", num[x]);
	}	
	
	insertionsort(num, 5);

	printf("\n SORTED ARRAY \n");
	for (int x = 0; x < 5; x++) {
		printf("%d, ", num[x]);
	}

}
