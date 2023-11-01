// use LINEAR seach to sort an array of random NUMBERS. 

#include<stdio.h>
#include<stdlib.h>

int linearSearch(int arr[], int size, int key) {
	for(int x =0; x <= size; x++)
		if(arr[x] == key)
			return x;
	return -1; 
}

int main ( ) {
	int num[ 5 ], position;

	for (int x = 0; x <= 5; x++) {
		printf("Enter a number: ");
		scanf("%d", &num[x]);
	}	
	
	position = linearSearch(num, 5, 12);
	
	printf("The number you searched is at position %d", position);
}
