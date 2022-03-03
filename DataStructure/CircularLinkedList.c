#include "���.h"

typedef struct Node {
	int data;
	struct Node* next;
}node;

void insertFirstNode(node*, int);
void insertFinalNode(node*, int);
void printCnode(node*);
void allDelCnode(node*);
//void removeCnode(node*, int);

void circlualrLinkedList() {
	node* tail = (node*)malloc(sizeof(node));
	tail->next = NULL;

	insertFirstNode(tail, 10);
	insertFirstNode(tail, 20);
	printCnode(tail);

	insertFinalNode(tail, 30);
	insertFirstNode(tail, 40);
	insertFinalNode(tail, 50);
	printCnode(tail);

	allDelCnode(tail);
}

void insertFirstNode(node* t, int d) {
	node* newNode = (node*)malloc(sizeof(node));
	if (newNode == NULL) {
		return;
	}

	newNode->next = NULL;
	newNode->data = d;

	//���� �� ��尡 ���� ��
	if (t->next == NULL) {
		t->next = newNode;
		newNode->next = newNode;
	}
	else {
		//������ ��� ã��
		node* curr = t->next;
		while (curr->next->data != t->next->data) {
			curr = curr->next;
		}

		newNode->next = t->next;
		t->next = newNode;
		curr->next = newNode;
	}
}

void insertFinalNode(node* t, int d) {
	node* newNode = (node*)malloc(sizeof(node));
	if (newNode == NULL) {
		return;
	}

	newNode->next = NULL;
	newNode->data = d;

	t = t->next;
	node* curr = t->next;
	while (curr->next->data != t->data) {
		curr = curr->next;
	}

	curr->next = newNode;
	newNode->next = t;
}

void printCnode(node* t) {
	if (t->next != NULL) {
		t = t->next;
		//ù��° ��� ���
		printf("data : %d / next : %p\n", t->data, t->next);

		node* curr = t->next;
		while (curr->data != t->data) {
			printf("data : %d / next : %p\n", curr->data, curr->next);
			curr = curr->next;
		}
		printf("\n");
	}
}

void allDelCnode(node* t) {
	node* curr = t->next;
	node* tmp = curr;
	while (1) {
		printf("%d�� ������ ���� ��� ����\n", tmp->data);
		if (t->next->data == curr->next->data) {
			break;
		}
		curr = curr->next;
		free(tmp);
		tmp = curr;
	}
}