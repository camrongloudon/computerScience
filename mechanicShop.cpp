/* at a mechanic shop a vehicle is inspected for $150 if it passes the customer pays and leaves, 
if it does not pass inspection the vehicle needs to be repaired. the cost of the repairs is the cost of the parts required + $200 labour per hour. 
the initial fee of $150 is waived */

#include<stdio.h>
#include<stdlib.h>

int main ( ) {
	int hours, passed, labourCharge;
	float partsCost, totalCost;
	
	labourCharge = 200;
	
	printf("Enter 1 if passed, 2 if failed: ");
	scanf("%d", &passed);
	
	if ( passed == 1 )
		totalCost = 150;
	else {
		printf("What is cost of parts: ");
		scanf("%f", &partsCost);
		
		printf("How many hours did you work?: ");
		scanf("%d", &hours);
	
		labourCharge = hours * labourCharge;
		totalCost = labourCharge + partsCost;
	}
	printf("Your total charge is $%5.2f", totalCost);
	printf("\n");
	
	system("pause");
}
