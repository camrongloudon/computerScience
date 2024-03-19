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

// Function to calculate the average time taken by all athletes
float calculateAverageTime(racerInfo racers) {
    float sum = 0;
    for (int i = 0; i < racers.racerNumber; i++) {
        sum += racers.timeTaken[i];
    }
    return sum / racers.racerNumber;
}

// Function to find and display the fastest athlete
void displayFastestAthlete(racerInfo racers) {
    float fastestTime = racers.timeTaken[0];
    char fastestNames[100][20];
    int numFastest = 1;
    strcpy(fastestNames[0], racers.name[0]);

    for (int i = 1; i < racers.racerNumber; i++) {
        if (racers.timeTaken[i] < fastestTime) {
            fastestTime = racers.timeTaken[i];
            numFastest = 1;
            strcpy(fastestNames[0], racers.name[i]);
        } else if (racers.timeTaken[i] == fastestTime) {
            strcpy(fastestNames[numFastest], racers.name[i]);
            numFastest++;
        }
    }

    if (numFastest == 1) {
        printf("Fastest athlete: %s, Time: %f\n", fastestNames[0], fastestTime);
    } else {
        printf("Tied for first place:\n");
        for (int i = 0; i < numFastest; i++) {
            printf("%s\n", fastestNames[i]);
        }
        printf("Time: %f\n", fastestTime);
    }
}

// Function to find and display the slowest athlete
void displaySlowestAthlete(racerInfo racers) {
    float slowestTime = racers.timeTaken[0];
    char slowestNames[100][20];
    int numSlowest = 1;
    strcpy(slowestNames[0], racers.name[0]);

    for (int i = 1; i < racers.racerNumber; i++) {
        if (racers.timeTaken[i] > slowestTime) {
            slowestTime = racers.timeTaken[i];
            numSlowest = 1;
            strcpy(slowestNames[0], racers.name[i]);
        } else if (racers.timeTaken[i] == slowestTime) {
            strcpy(slowestNames[numSlowest], racers.name[i]);
            numSlowest++;
        }
    }

    if (numSlowest == 1) {
        printf("Slowest athlete: %s, Time: %f\n", slowestNames[0], slowestTime);
    } else {
        printf("Tied for last place:\n");
        for (int i = 0; i < numSlowest; i++) {
            printf("%s\n", slowestNames[i]);
        }
        printf("Time: %f\n", slowestTime);
    }
}

int main( ) {
    racerInfo racers;

    racers.racerNumber = 0;
    printf("Enter athlete names and finishing times. \nType 'end' to stop adding athletes!\n \n");
    printf("Athlete Name: ");
    scanf("%s", &racers.name[racers.racerNumber]);
    
    while(strcmp(racers.name[racers.racerNumber], "end") != 0) {  
        printf("Athlete Time: ");
        scanf("%f", &racers.timeTaken[racers.racerNumber]);

        racers.racerNumber++;    
        
        printf("\nAthlete Name: ");
        scanf("%s", &racers.name[racers.racerNumber]);
    }   
    selectionSortLow(racers.timeTaken, racers.name, racers.racerNumber);
    
    // Writing to file.
    FILE *out = fopen("output.txt", "w");
    for(int x=0; x<=racers.racerNumber - 1; x++) {
        fprintf(out, "%s \n", racers.name[x]);
        fprintf(out, "%f \n", racers.timeTaken[x]);
    }
    fclose(out);
    
    printf(" _______________________\n");
    printf("| Athlete Name    | Time |\n");
    printf("|------------------------|\n");

    for (int x = 0; x < racers.racerNumber; x++) {
        printf(" %s          | %5.6f |\n", racers.name[x], racers.timeTaken[x]);
    }
    printf("|------------------------|\n");

    // Printouts
    printf("Average time taken by all athletes: %f\n", calculateAverageTime(racers));
    printf("\n");
    displayFastestAthlete(racers);
    printf("\n");
    displaySlowestAthlete(racers);

    printf("THE DOCUMENT HAS BEEN PRINTED\n");
}

