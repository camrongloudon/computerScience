#include<stdlib.h>
#include<stdio.h>

typedef struct node {
	int num;
	struct node *next;
}Node, *Nodeptr;


Nodeptr Makenode(int n) {
	Nodeptr np = (Nodeptr)malloc(sizeof(node));
	np -> num= n;
	np -> next= NULL;
	return np;
}

Nodeptr addfront (Nodeptr head, int n) {
	Nodeptr np = Makenode(n);
	np -> next = head;
	head = np;
	return head;
}

Nodeptr search(Nodeptr curr, int key) {
	while((curr != NULL) && (curr -> num == key)) {
		curr = curr -> next;
	}
	return curr;
}

void printlist(Nodeptr curr) {
	while(curr != NULL){
		printf("%d \n", curr -> num );
		curr = curr -> next;
	}
}

int main () {
	Nodeptr head = NULL;
	int num;
	printf("Enter some numbers: \n");
	scanf("%d", &num);
	while(num != -1) {
		head = addfront(head, num);
		scanf("%d", &num);
	}
	if (search(head, 15) != NULL) {
		printf("The number was not found!");
	}
	else {
		printf("The number was:");
		printlist(head);
	}

}
