#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct RacerNode {
    char name[20];
    float timeTaken;
    struct RacerNode* next;
} RacerNode, *RacerNodePtr;

// Function to create a new racer node
RacerNodePtr createRacerNode(const char* name, float time) {
    RacerNodePtr newNode = (RacerNodePtr)malloc(sizeof(RacerNode));
    strcpy(newNode->name, name);
    newNode->timeTaken = time;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a racer node in sorted order
RacerNodePtr insertRacerSorted(RacerNodePtr head, RacerNodePtr newRacer) {
    if (head == NULL || newRacer->timeTaken < head->timeTaken) {
        newRacer->next = head;
        return newRacer;
    }
    RacerNodePtr current = head;
    while (current->next != NULL && current->next->timeTaken < newRacer->timeTaken) {
        current = current->next;
    }
    newRacer->next = current->next;
    current->next = newRacer;
    return head;
}

// Function to calculate the average time taken by all racers
float calculateAverageTime(RacerNodePtr head) {
    float sum = 0;
    int count = 0;
    RacerNodePtr current = head;
    while (current != NULL) {
        sum += current->timeTaken;
        count++;
        current = current->next;
    }
    return count ? sum / count : 0;
}

// Function to display the fastest athlete
void displayFastestAthlete(RacerNodePtr head) {
    if (head == NULL) return;

    float fastestTime = head->timeTaken;
    printf("Fastest athlete: %s, Time: %f\n", head->name, fastestTime);
}

// Function to display the slowest athlete
void displaySlowestAthlete(RacerNodePtr head) {
    if (head == NULL) return;

    RacerNodePtr current = head;
    float slowestTime = current->timeTaken;
    RacerNodePtr slowestRacer = current;

    while (current != NULL) {
        if (current->timeTaken > slowestTime) {
            slowestTime = current->timeTaken;
            slowestRacer = current;
        }
        current = current->next;
    }
    printf("Slowest athlete: %s, Time: %f\n", slowestRacer->name, slowestTime);
}

// Function to print the racers list
void printRacers(RacerNodePtr head) {
    printf(" _______________________\n");
    printf("| Athlete Name    | Time |\n");
    printf("|------------------------|\n");

    RacerNodePtr current = head;
    while (current != NULL) {
        printf(" %s          | %5.6f |\n", current->name, current->timeTaken);
        current = current->next;
    }
    printf("|------------------------|\n");
}

// Function to free the memory of the racers list
void freeRacers(RacerNodePtr head) {
    RacerNodePtr current = head;
    while (current != NULL) {
        RacerNodePtr next = current->next;
        free(current);
        current = next;
    }
}

int main() {
    RacerNodePtr head = NULL;
    char name[20];
    float time;

    printf("Enter athlete names and finishing times.\nType 'end' to stop adding athletes!\n\n");
    printf("Athlete Name: ");
    scanf("%s", name);

    while (strcmp(name, "end") != 0) {
        printf("Athlete Time: ");
        scanf("%f", &time);

        RacerNodePtr newRacer = createRacerNode(name, time);
        head = insertRacerSorted(head, newRacer);

        printf("\nAthlete Name: ");
        scanf("%s", name);
    }

    // Writing to file.
    FILE *out = fopen("output.txt", "w");
    RacerNodePtr current = head;
    while (current != NULL) {
        fprintf(out, "%s\n", current->name);
        fprintf(out, "%f\n", current->timeTaken);
        current = current->next;
    }
    fclose(out);

    printRacers(head);

    // Printouts
    printf("Average time taken by all athletes: %f\n", calculateAverageTime(head));
    printf("\n");
    displayFastestAthlete(head);
    printf("\n");
    displaySlowestAthlete(head);

    // Free the allocated memory
    freeRacers(head);

    printf("THE DOCUMENT HAS BEEN PRINTED\n");
    return 0;
}

