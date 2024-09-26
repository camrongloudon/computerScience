#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct node {
    char num[20];
    struct node *next;
} Node, *Nodeptr;

Nodeptr Makenode(const char* str) {
    Nodeptr np = (Nodeptr)malloc(sizeof(Node));
    if (np == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    strncpy(np->num, str, 20 - 1);
    np->num[20 - 1] = '\0'; // Ensure null-termination
    np->next = NULL;
    return np;
}

Nodeptr addfront(Nodeptr head, const char* str) {
    Nodeptr np = Makenode(str);
    np->next = head;
    head = np;
    return head;
}

void printlist(Nodeptr curr) {
    while (curr != NULL) {
        printf("%s\n", curr->num);
        curr = curr->next;
    }
}

int main() {
    Nodeptr head = NULL;
    char string[20];
    int i;

    printf("Enter 15 strings: \n");
    for (i = 0; i < 15; i+1) {
        printf("String %d: ", i++);
		scanf("%s", string);
		head = addfront(head, string);
    }

    printf("Strings: \n");
    printlist(head);

    // Free allocated memory (not shown here for simplicity)

    return 0;
}

