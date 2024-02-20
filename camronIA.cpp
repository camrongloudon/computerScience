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
typedef struct{
	int racerNumber;
	float timeTaken[100];
	float times[100];
	char name[100][20];
	char fileNames[100][20];
}racerInfo;

int main ( ) {
	racerInfo racers;
	
	racers.racerNumber = 0;
	
	printf("Athlete Name: ");
	scanf("%s", &racers.name[racers.racerNumber]);
	
	while(strcmp(racers.name[racers.racerNumber], "end") != 0) {  
		printf("Athlete Time: ");
		scanf("%f", &racers.timeTaken[racers.racerNumber]);

		racers.racerNumber++;	
		
		printf("Athlete Name: ");
		scanf("%s", &racers.name[racers.racerNumber]);
	}	
	selectionSortLow(timeTaken, name, racerNumber);
	
	//Writing to file.
	FILE *out = fopen("output.txt", "w");
	for(int x=0; x<=racerNumber - 1; x++) {
		fprintf(out, "%s\n", &name[x]);
		fprintf(out, "%d\n", &timeTaken[x]);
	}
	fclose(out);
	
	printf(" _______________________\n");
	printf("| Athlete Name    | Time	|\n");
	printf("|-------------------------------------------------------|\n");

	for (int x = 0; x < racerNumber; x++) {
	printf(" %s          | %5.6f |\n", name[x], timeTaken[x]);
	}
	printf("|-------------------------------------------------------|\n");
}
