#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 30

// Structure to store customer purchase information
typedef struct CustomerNode {
    char customerName[MAX_NAME_LENGTH];
    char productName[MAX_NAME_LENGTH];
    int amount;
    int price;
    int total;
    struct CustomerNode* next;
} CustomerNode, *CustomerNodePtr;

// Function to create a new customer node
CustomerNodePtr createCustomerNode(const char* customerName, const char* productName, int amount, int price) {
    CustomerNodePtr newNode = (CustomerNodePtr)malloc(sizeof(CustomerNode));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    strcpy(newNode->customerName, customerName);
    strcpy(newNode->productName, productName);
    newNode->amount = amount;
    newNode->price = price;
    newNode->total = amount * price; // Calculate total
    newNode->next = NULL;
    return newNode;
}

// Function to add a customer node to the end of the list
CustomerNodePtr addCustomer(CustomerNodePtr head, CustomerNodePtr newNode) {
    if (head == NULL) {
        return newNode;
    }
    CustomerNodePtr current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

// Function to find the customer with the highest total
CustomerNodePtr findCustomerWithHighestTotal(CustomerNodePtr head) {
    CustomerNodePtr highest = head;
    for (CustomerNodePtr current = head; current != NULL; current = current->next) {
        if (current->total > highest->total) {
            highest = current;
        }
    }
    return highest;
}

// Function to find the customer with the lowest total
CustomerNodePtr findCustomerWithLowestTotal(CustomerNodePtr head) {
    CustomerNodePtr lowest = head;
    for (CustomerNodePtr current = head; current != NULL; current = current->next) {
        if (current->total < lowest->total) {
            lowest = current;
        }
    }
    return lowest;
}

// Function to calculate the average total
float calculateAverage(CustomerNodePtr head) {
    int sum = 0;
    int count = 0;
    for (CustomerNodePtr current = head; current != NULL; current = current->next) {
        sum += current->total;
        count++;
    }
    return count ? (float)sum / count : 0;
}

// Function to free the customer list
void freeCustomers(CustomerNodePtr head) {
    CustomerNodePtr current = head;
    while (current != NULL) {
        CustomerNodePtr next = current->next;
        free(current);
        current = next;
    }
}

int main() {
    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }

    char customerName[MAX_NAME_LENGTH];
    char productName[MAX_NAME_LENGTH];
    int amount, price;
    CustomerNodePtr head = NULL;

    printf("Enter customer's name (type 'end' to stop):\n ");
    fgets(customerName, sizeof(customerName), stdin);
    while (strcmp(customerName, "end\n") != 0) {
        // Remove newline character if present
        customerName[strcspn(customerName, "\n")] = '\0';

        printf("Enter name of product being purchased:\n ");
        fgets(productName, sizeof(productName), stdin);
        productName[strcspn(productName, "\n")] = '\0'; // Remove newline

        printf("How many of this product did they purchase?:\n ");
        scanf("%d", &amount);
        getchar(); // Consume the newline character

        printf("What's the price of this product? \n");
        scanf("%d", &price);
        getchar(); // Consume the newline character

        CustomerNodePtr newCustomer = createCustomerNode(customerName, productName, amount, price);
        head = addCustomer(head, newCustomer);

        fprintf(out, "Customer: %s\nProduct: %s\nAmount: %d\nPrice: %d\nTotal: %d\n",
                newCustomer->customerName, newCustomer->productName, amount, price, newCustomer->total);

        printf("They purchased %d items.\n", amount);
        printf("The total of this purchase is %d.\n", newCustomer->total);

        printf("\nEnter customer's name (type 'end' to stop):\n ");
        fgets(customerName, sizeof(customerName), stdin);
    }

    if (head != NULL) {
        CustomerNodePtr highest = findCustomerWithHighestTotal(head);
        printf("\nCustomer with the highest total purchase price: %s, Total: %d\n", highest->customerName, highest->total);

        CustomerNodePtr lowest = findCustomerWithLowestTotal(head);
        printf("\nCustomer with the lowest total purchase price: %s, Total: %d\n", lowest->customerName, lowest->total);

        float average = calculateAverage(head);
        printf("\nAverage total purchase price: %.2f\n", average);
    } else {
        printf("\nNo customers entered.\n");
    }

    fclose(out);
    freeCustomers(head);

    return 0;
}
