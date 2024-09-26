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

Nodeptr addinplace(Nodeptr head, int n){
	Nodeptr np, curr, prev;
	np = Makenode(n);
	prev = NULL;
	curr = head;
	while (curr != NULL && n > curr -> num) {
		prev = curr;
		curr = curr -> next;
	}
	if (prev == NULL) {
		np -> next = head;
		return np;
	}
	np -> next = curr;
	prev -> next = np;
	return head;
}

//add last
Nodeptr getlast(Nodeptr head) {
	Nodeptr curr = head;
	while((curr != NULL) && (curr -> next != NULL)) {
		curr = curr -> next;
	}
	return curr;
}

Nodeptr addlast(Nodeptr head, int n) {
	Nodeptr np = Makenode(n);
	Nodeptr Last = getlast(head);
	if (Last == NULL)
		return np;
	Last -> next = np;
	return head;
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
		head = addinplace(head, num);
		scanf("%d", &num);
	}
	printf("The numbers you entered: \n");
 	printlist(head);
}
