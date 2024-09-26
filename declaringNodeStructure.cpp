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

int main () {

}
