#include "Çì´õ.h"
#define SIZE 10

typedef char element;

typedef struct {
	element que[SIZE];
	int front, rear;
}queue;

queue* createQ() {
	queue* q = (queue*)malloc(sizeof(queue));
	if (q == NULL) {
		exit(1);
	}
	q->front = -1;
	q->rear = -1;
	return q;
}

bool isEmpty4(queue* apq) {
	if (apq->front == apq->rear) {
		return true;
	}
	else {
		return false;
	}
}

bool isFull4(queue* apq) {
	if (apq->rear >= SIZE -1) {
		return true;
	}
	else {
		return false;
	}
}

void enQueue(queue* apq, element adata) {
	if(isFull4(apq)) {
		printf("Queue is full\n");
		return;
	}
	apq->que[++(apq->rear)] = adata;
}

element deQueue(queue* apq) {
	if (isEmpty4(apq)) {
		printf("Queue is empty\n");
		return;
	}
	return apq->que[++(apq->front)];
}

element peek4(queue* apq) {
	if (isEmpty4(apq)) {
		printf("Queue is empty\n");
		return;
	}
	return apq->que[apq->front];
}

void printQ(queue* apq) {
	if (isEmpty4(apq)) {
		printf("Queue is empty\n");
		return;
	}
	while (apq->front <= apq->rear) {
		printf("%c\n", apq->que[(apq->front)++]);
	}
}

void Queue() {
	queue* Q = createQ();

	enQueue(Q, 'A');
	enQueue(Q, 'B');
	enQueue(Q, 'C');
	enQueue(Q, 'D');
	enQueue(Q, 'E');
	enQueue(Q, 'F');

	printf("deQueue : %c\n", deQueue(Q));
	printf("deQueue : %c\n", deQueue(Q));
	printf("peek : %c\n", peek4(Q));
	printf("peek : %c\n", peek4(Q));
	printf("deQueue : %c\n", deQueue(Q));
	printf("peek : %c\n", peek4(Q));

	printQ(Q);
}