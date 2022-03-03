#include "헤더.h"

typedef struct _node {
	int data;						//데이터를 저장할 멤버변수
	struct _node* next;		//노드주소를 저장할 멤버 변수
}Node;

void simpleLinkedList() {
	Node* head = (Node*)malloc(sizeof(Node));
	if (head == NULL) {
		return;
	}
	head->next = NULL;

	Node *node1 = (Node*)malloc(sizeof(Node));
	node1->data = 10;
	node1->next = NULL;
	head->next = node1;

	Node* node2 = (Node*)malloc(sizeof(Node));
	node2->data = 20;
	node1->next = node2;
	node2->next = NULL;

	Node* node3 = (Node*)malloc(sizeof(Node));
	node3->data = 30;
	node2->next = node3;
	node3->next = NULL;

	Node* node4 = (Node*)malloc(sizeof(Node));
	node4->data = 40;
	node3->next = node4;
	node4->next = NULL;

	Node* curr;
	curr = head;
	while(curr->next != NULL) {
		curr = curr->next;
		printf("%d\n", curr->data);
	}
	free(head);
	free(node1);
	free(node2);
	free(node3);
	free(node4);

	/*Node node1;
	node1.data = 10;
	node1.next = NULL;

	Node node2;
	node2.data = 20;
	node1.next = &node2;

	printf("%d %p\n", node1.data, node1.next);
	printf("%d %p\n", node2.data, node2.next);
	printf("%p\n", &node2);*/
}