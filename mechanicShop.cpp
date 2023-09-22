/* at a mechanic shop a vehicle is inspected for $150 if it passes the customer pays and leaves, 
if it does not pass inspection the vehicle needs to be repaired. the cost of the repairs is the cost of the parts required + $200 labour. 
the initial fee of $150 is waived */

#include<stdio.h>
#include<stdlib.h>

int main ( ) {
	int passed, partsCost, totalCost, serviceCharge;
	
	serviceCharge = 200;
	
	printf("Enter 1 if passed, 2 if failed: ");
	scanf("%d", &passed);
	
	if ( passed == 1 )
		totalCost = 150;
	else {
		printf("What is cost of parts: ");
		scanf("%d", &partsCost);
		totalCost = serviceCharge + partsCost;
	}
	printf("Your total charge is %d", totalCost);
	printf("\n");
	
	system("pause");
}
