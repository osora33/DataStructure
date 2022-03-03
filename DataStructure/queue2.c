#include "Çì´õ.h"

typedef char element;
typedef struct Node {
	struct Node* link;
	element data;
}node;
typedef struct {
	node* rear;
	node* front;
}Qlink;

Qlink* createQ5() {
	Qlink* ql = (Qlink*)malloc(sizeof(Qlink));
	if (ql == NULL) {
		exit(1);
	}
	ql->front = NULL;
	ql->rear = NULL;
	return ql;
}

bool isEmpty5(Qlink* aql) {
	if (aql->front == NULL) {
		printf("Queue is Empty\n");
		return true;
	}
	else {
		return false;
	}
}

void enQueue5(Qlink* aql, element adata) {
	node* newNode = (node*)malloc(sizeof(node));
	if (newNode == NULL) {
		exit(1);
	}
	newNode->data = adata;
	newNode->link = NULL;
	
	if (isEmpty5(aql)) {
		aql->front = newNode;
		aql->rear = newNode;
	}
	else {
		aql->rear->link = newNode;
		aql->rear = newNode;
	}
}

void printQ5(Qlink* aql) {
	node* curr = aql->front;
	while (curr) {
		printf("%c ", curr->data);
		curr = curr->link;
	}
}

element deQueue5(Qlink* aql) {
	node* del = aql->front;
	element d;
	if (isEmpty5(aql)) {
		return 0;
	}
	else {
		d = del->data;
		aql->front = del->link;
		if (aql->front == NULL) {
			aql->rear = NULL;
		}
		free(del);
		return d;
	}
}

void queue2() {
	Qlink* q = createQ5();
	enQueue5(q, 'A');
	enQueue5(q, 'B');
	enQueue5(q, 'C');
	enQueue5(q, 'D');
	printQ5(q);

	printf("\n\n");
	deQueue5(q);
	printQ5(q);
}