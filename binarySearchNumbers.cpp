// use BINARY seach to sort an array of random NUMBERS. 

#include<stdio.h>
#include<stdlib.h>

int binarySearch(int arr[], int size, int key) {
	int lo = 0, hi = size - 1, mid;
		while(lo <= hi) {
			mid = (lo + hi) / 2;
			if (arr[mid] == key)
				return mid;
			if (arr[mid] > key)
				hi = mid - 1;
			else 
				lo = mid + 1;
		}
	return - 1;
}

int main ( ) {
	int num[ 5 ], position;

	for (int x = 0; x <= 5; x++) {
		printf("Enter a number: ");
		scanf("%d", &num[x]);
	}	
	
	position = binarySearch(num, 5, 12);
	
	printf("The number you searched is at position %d", position);
}
