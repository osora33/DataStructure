#include "헤더.h"

typedef struct _node {
	int data;
	struct _node* next;
}Node;

//전위삽입노드
void preInsertNode(Node* h, int d) {	
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		return;
	}
	newNode->data = d;
	newNode->next = h->next;
	h->next = newNode;
}

//후위삽입노드
void rearInsertNode(Node* h, int d) {
	Node* newNode = malloc(sizeof(Node));
	if (newNode == NULL) {
		return;
	}
	newNode->data = d;
	newNode->next = NULL;

	Node* curr = h->next;
	if (curr == NULL) {
		h->next = newNode;
	}
	else {
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = newNode;
	}

	/*while (1) {
		if (h->next == NULL) {
			h->next = newNode;
			break;
		}
		h = h->next;
	}*/
}

void interInsertNode1(Node* h, Node* res, int d) {
	while (h->next != NULL) {
		h = h->next;
		if (h->next->data == res->data) {
			Node* tmp = malloc(sizeof(Node));
			tmp->data = d;
			tmp->next = res->next;
			res->next = tmp;
			break;
		}
	}
}

void interInsertNode2(Node* h, Node* res, int d) {
	while (h->next != NULL) {
		h = h->next;
		if (h->next->data == res->data) {
			Node* tmp = malloc(sizeof(Node));
			tmp->data = d;
			h->next = tmp;
			tmp->next = res;
			break;
		}
	}
}

//노드 출력
void printNode(Node* h) {
	while (h->next != NULL) {
		h = h->next;
		printf("%d / %p\n", h->data, h->next);
	}
	printf("\n");
}

//동적할당 해제
void freeNode(Node* h) {
	Node* curr = h;
	while (h->next != NULL) {
		h = h->next;
		printf("%d의 노드 동적할당 해제\n", h->data);
		free(curr);
		curr = h;
	}
}

Node* searchNode(Node* h, int d) {
	Node* curr = h->next;
	while (curr->next != NULL) {
		if (curr->data == d) {
			printf("값 : %d / next : %p\n\n", curr->data, curr->next);
			return curr;
		}
		else {
			curr = curr->next;
		}
	}
}

void deleteNode(Node* h, Node *res) {
	while (h->next != NULL) {
		if (h->next->data == res->data) {
			h->next = res->next;
			free(res);
		}
		h = h->next;
	}
}

void singlyLinkedList() {
	Node* res;
	Node* head = malloc(sizeof(Node));
	if (head != NULL) {
		head->next = NULL;
	}

	preInsertNode(head, 10);
	preInsertNode(head, 20);
	rearInsertNode(head, 30);
	rearInsertNode(head, 40);
	preInsertNode(head, 50);
	printNode(head);

	//노드 찾은 뒤 삭제
	res = searchNode(head, 20);
	deleteNode(head, res);
	printNode(head);

	//노드 찾은 뒤 그 노드 뒤에 추가
	res = searchNode(head, 30);
	interInsertNode1(head, res, 60);
	printNode(head);

	//노드 찾은 뒤 그 노드 앞에 추가
	interInsertNode2(head, res, 70);
	printNode(head);

	freeNode(head);
}