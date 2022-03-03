#include "헤더.h"

typedef int element;

typedef struct Node {			//리스트 구조체
	int data;
	struct node* link;
}node;

typedef struct {					//헤드 구조체
	node* head;
}Hstruct;

Hstruct* createHead();
bool isEmpty3(Hstruct*);
void push3(Hstruct*, element);
element pop3(Hstruct*);
element peek3(Hstruct*);

void stack3() {
	Hstruct* h = createHead();
	h->head = NULL;

	push3(h, 10);
	push3(h, 20);
	push3(h, 30);

	printf("%d\n", peek3(h));
	printf("%d\n", pop3(h));
	printf("%d\n", pop3(h));
	printf("%d\n", pop3(h));
	printf("%d\n", pop3(h));
}

Hstruct* createHead() {
	Hstruct* h = (Hstruct*)malloc(sizeof(Hstruct));
	if (h == NULL) {
		exit(1);
	}
	return h;
}

bool isEmpty3(Hstruct* h) {
	if (h->head == NULL) {
		return true;
	}
	else {
		return false;
	}
}

void push3(Hstruct* h, element d) {
	node* newNode = malloc(sizeof(node));
	newNode->data = d;
	newNode->link = h->head;
	h->head = newNode;
}

element pop3(Hstruct* h) {
	if (!isEmpty3(h)) {
		node* tmp = h->head;
		element res = h->head->data;
		h->head = h->head->link;
		free(tmp);
		return res;
	}
	else {
		printf("STACK UNDERFLOW\n");
		return 0;
	}
}

element peek3(Hstruct* h) {
	if (!isEmpty3(h)) {
		element res = h->head->data;
		return res;
	}
	else {
		printf("STACK UNDERFLOW\n");
		return;
	}
}