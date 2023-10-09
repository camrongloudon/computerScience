/* Ask for 5 item names of their prices and their prices. Output the item name and their price. */

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
	char itemName[4][15];
	int price[4];

	for (int x = 0; x <= 1; x++) {
		printf("What is the item: ");
		scanf("%s", &itemName[x]);

		printf("Enter a price: ");
		scanf("%d", &price[x]);
		
		printf("\n");
	}	

	for (int x = 0; x <= 1; x++) {
		printf("%s costs %d", itemName[x], price[x]);
		printf("\n");
	}
}
