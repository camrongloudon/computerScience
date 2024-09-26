//stacks
#include<stdlib.h>
#include<stdio.h>

#define maxstack 10
#define roguevalue -999

typedef struct {
	int top;
	int st[maxstack];
}stacktype, *stack;

stack initstack() {
	stack sp = (stack) malloc(sizeof(stacktype));
	sp -> top = -1;
	return sp;
}

void push (stack s, int n) {
	if (s -> top == maxstack -1) {
		printf("stack is full");
		exit(1);
	}
	s -> top = s -> top + 1; //moving the array
	s -> st[s -> top] = n;
}

int empty (stack s) {
	return(s -> top == -1);
}

int pop (stack s) {
	if (empty(s))
		return roguevalue;
	int hold = s -> st[s -> top];
		s -> top = s -> top -1;
		return hold;
}

int main (){
	stack s = initstack();
	int n;
	
	printf("Enter some numbers: \n");
	scanf("%d", &n);
	
	while (n != -1) {
		push(s, n);
		scanf("%d", &n);
	}
	printf("The numbers are: \n");
	while (!empty(s))
		printf("%d \n", pop(s));
};
