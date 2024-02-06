#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void selectionSortLow(float arr[], char name[][20], int size) {
	for (int i = 0; i < size - 1; i++) {
		int smallest = i;
		for (int y = i + 1; y < size; y++) {
			if (arr[y] < arr[smallest])
				smallest = y;
		}
	int temp = arr[smallest];
	arr[smallest] = arr[i];
	arr[i] = temp;
	
	char tempName[25];
        strcpy(tempName, name[smallest]);
        strcpy(name[smallest], name[i]);
        strcpy(name[i], tempName);
	}
}
int main ( ) {
	int counter;
	float timeTaken[100], times[100];
	char name[100][20], fileNames[100][20], choice[1];
	
	counter = 0;

	printf("Would you like to enter new scores of see previous? enter y for yes, n for no");
	scanf("%s", &choice);
	
	printf("Athlete Name: ");
	scanf("%s", &name[counter]);
	
	while(strcmp(name[counter], "end") != 0) {  
		printf("Athlete Time: ");
		scanf("%f", &timeTaken[counter]);

		counter++;	
		
		printf("Athlete Name: ");
		scanf("%s", &name[counter]);
	}	
	selectionSortLow(timeTaken, name, counter);
	
	//Writing to file.
	FILE *in = fopen("output.txt", "r");
	for(int x=0; x<=counter; x++) {
		fscanf(in, "%s", &name[x]);
		fscanf(in, "%d", &timeTaken[x]);
	}
	fclose(in);
	
	printf(" _______________________\n");
	printf("| Athlete Name    | Time	|\n");
	printf("|-------------------------------------------------------|\n");

	for (int x = 0; x < counter; x++) {
	printf(" %s          | %5.6f |\n", name[x], timeTaken[x]);
	}
	printf("|-------------------------------------------------------|\n");
}
