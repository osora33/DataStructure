//#include "���.h"
//
//typedef struct _node {
//	int data;
//	struct _node* next;
//}Node;
//
//void addNode(Node* h, int d) {
//	Node* newNode = malloc(sizeof(Node));
//	newNode->data = d;
//	newNode->next = h->next;		//�ι�° ��带 ����Ű�� �Ѵ�
//	h->next = newNode;					//ù��° ���� ��ġ��Ų��
//	/*newNode->next = NULL;
//
//	while (1) {
//		if (h->next == NULL) {
//			h->next = newNode;
//			break;
//		}
//		h = h->next;
//	}*/
//}
//
//void printNode(Node* h) {
//	while (h->next != NULL) {
//		h = h->next;
//		printf("%d\n", h->data);
//	}
//}
//
//void createNode() {
//	Node* head = malloc(sizeof(Node));
//	head->next = NULL;
//
//	addNode(head, 10);
//	addNode(head, 20);
//	printNode(head);
//}