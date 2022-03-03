#include "Çì´õ.h"
#define STACK_SZ 5

typedef int element;

typedef struct {
	int top;
	element stack[STACK_SZ];
}Stack;

void initStack(Stack*);
bool isEmpty2(Stack*);
bool isFull2(Stack*);
void push2(Stack*, element);
element pop2(Stack*);

void stack2() {
	Stack stack;
	initStack(&stack);

	push2(&stack, 10);
	push2(&stack, 20);
	push2(&stack, 30);
	push2(&stack, 40);
	push2(&stack, 50);
	push2(&stack, 60);

	printf("%d\n", pop2(&stack));
	printf("%d\n", pop2(&stack));
	printf("%d\n", pop2(&stack));
	printf("%d\n", pop2(&stack));
	printf("%d\n", pop2(&stack));
	printf("%d\n", pop2(&stack));
}

void initStack(Stack* pstack) {
	pstack->top = -1;
}

bool isEmpty2(Stack* pstack) {
	if (pstack->top <= -1) {
		return true;
	}
	else {
		return false;
	}
}

bool isFull2(Stack* pstack) {
	if (pstack->top >= STACK_SZ - 1) {
		return true;
	}
	else {
		return false;
	}
}

void push2(Stack* pstack, element d) {
	if (!isFull2(pstack)) {
		pstack->top = (pstack->top)++;
		pstack->stack[pstack->top] = d;
	}
	else {
		printf("STACK overflow\n");
		return;
	}
}

element pop2(Stack* pstack) {
	if (!isEmpty2(pstack)) {
		pstack->top == (pstack->top)--;
		return pstack->stack[pstack->top];
	}
	else {
		printf("STACK UNDERFLOW\n");
		return 0;
	}
}