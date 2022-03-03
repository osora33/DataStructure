//#include "헤더.h"
#include <stdlib.h>

typedef struct Dnode {
	int data;
	struct Dnode* next;
	struct Dnode* prev;
}dnode;

void insertDnode(dnode* h, dnode*, char);
dnode* searchDNode(dnode*, int);
void printDnode(dnode*);
void allDelNode(dnode*);
void removeNode(dnode*, dnode*);

void doublyLinkedList() {
	dnode* head = (dnode*)malloc(sizeof(dnode));
	if (head == NULL) {
		exit(1);
	}

	head->next = NULL;
	head->prev = NULL;
	dnode* pos = NULL;

	insertDnode(head, 10, pos, 'n');
	insertDnode(head, 20, pos, 'n');
	printDnode(head);

	pos = searchNode(head, 20);
	insertDnode(head, 30, pos, 'p');
	insertDnode(head, 40, pos, 'n');
	printDnode(head);

	pos = searchNode(head, 10);
	removeNode(head, pos);
	printDnode(head);

	allDelNode(head);
}

void insertDnode(dnode* h, int d, dnode* p, char opt) {
	dnode* newNode = (dnode*)malloc(sizeof(dnode));
	if (newNode == NULL) {
		return;
	}
	newNode->data = d;
	newNode->next = NULL;
	newNode->prev = NULL;

	//찾는 노드의 값이 없이 입력할 때
	if (p == NULL) {
		//첫번째 노드값 가져오기
		newNode->next = h->next;
		newNode->prev = h;
		if (h->next == NULL) {		//노드가 아예 없을 때
			h->next = newNode;
 		}
		else {									//전위삽입
			newNode->next->prev = newNode;
		}
		h->next = newNode;
	}
	else {
		h = h->next;
		while (h == p) {
			h = h->next;
		}
		if (opt == 'n') {
			newNode->next = h->next;
			newNode->prev = h;
			//마지막 노드가 아닌 경우에만
			if (h->next != NULL) {
				h->next->prev = newNode;
			}
			h->next = newNode;
		}
		else if (opt == 'p') {
			if (h->prev != NULL) {
				newNode->prev = h->prev;
				newNode->next = h;
				h->prev->next = newNode;
				h->prev = newNode;
			}
			else {
				newNode->next = h->next;
				h->next = newNode;
				newNode->prev = h;
				h->next = newNode;
			}
		}
	}
}

void printDnode(dnode* h) {
	while (h->next != NULL) {
		h = h->next;
		printf("data : %d / prev : %p / next : %p\n", h->data, h->prev, h->next);
	}
	printf("\n");
}

void allDelNode(dnode* h) {
	dnode* tmp = h;
	while (h->next != NULL) {
		h = h->next;
		printf("%d을 값으로 가진 노드 해제\n", h->data);
		free(tmp);
		tmp = h;
	}
}

dnode* searchDnode(dnode* h, int d) {
	while (h->next != NULL) {
		h = h->next;
		if (h->data == d) {
			printf("data %d값의 이전 주소는 %p, 다음 주소는 %p입니다.\n\n", d, h->prev, h->next);
			return h;
		}
	}
}

void removeNode(dnode* h, dnode* p) {
	while (h->next != NULL) {
		h = h->next;
		if (h->next->data == p->data) {
			printf("%d을 값으로 가진 노드 해제\n", p->data);
			h->next = p->next;
			if (p->next != NULL) {
				p->next->prev = h;
			}
			free(p);
		}
	}
}