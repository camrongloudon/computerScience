void enque (queue q, int n) {
	if (q -> tail == MaxQ -1)
		q -> tail = 0;
		
	else
		q -> tail = q -> tail + 1;
	if q -> tail = q -> head){
		printf("Queue is full\n");
		exit(1);
	}
	q -> qa[q -> tail] = n;
}

int empty(queue q ){
	return(q -> head == q -> tail);
	}
int dequeue(queue q) {
	if(empty)(q)){
		printf("Queue is empty.\n");
		exit(1);
	}
	if (q -> head == MaxQ -1)
		q -> head = 0;
	else
		q -> head = 1 -> head + 1;
		return 1 -> qa[q -> head]
}
}
