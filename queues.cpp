//queues
#include<stdlib.h>
#include<stdio.h>

#define maxstack 10
#define roguevalue -999

void enqueue(queue q, int n) {
	if (q -> tail == maxQueue - 1 )
		q -> tail = 0;
	else
		q -> tail = q -> tail + 1;
	if (q -> tail == q -> head) {
		printf("Queue is full");
		exit(1);
	}
	q -> qa[q -> tail[] = n;
}

void enqueue(queue q, int n) {
		int empty (queue q) {
			return (q -> head == q -> tail);
		}
		int dequeue (queues q) {
			if (empty(q)) {
				printf("Queue in Empty");
				exit(1);
			}
		}
		if (q -> head == maxQueue - 1)
			q -> head = 0;
		else
			q -> head = q -> head + 1;
		return q -> qa[q -> head];
}
