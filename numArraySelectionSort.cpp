//Selection Sort

#include <stdio.h>
#include <stdlib.h>


void selectionsort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		int smallest = i;
		for (int y = i + 1; y < size; y++) {
			if (arr[y] < arr[smallest])
				smallest = y;
		}
		int temp = arr[smallest];
		arr[smallest] = arr[i];
		arr[i] = temp;
	}
}

int main ( ) {
	int num[ 5 ];

	
	for (int x = 0; x < 5; x++) {
		printf("Enter a number: ");
		scanf("%d", &num[x]);
	}
	printf("ENTERED ARRAY \n");
	for (int x = 0; x < 5; x++) {
		printf("%d, ", num[x]);
	}	
	
	selectionsort(num, 5);

	printf("\n SORTED ARRAY \n");
	for (int x = 0; x < 5; x++) {
		printf("%d, ", num[x]);
	}

}
