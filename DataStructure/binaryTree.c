#include "헤더.h"

typedef struct TNode {
	char ch;
	struct TNode* left;
	struct TNode* right;
}tnode;

tnode* createNode(char ach) {
	tnode* newNode = (tnode*)malloc(sizeof(tnode));
	if (newNode == NULL) {
		return;
	}
	newNode->ch = ach;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

void makeTreeNode(tnode* aroot, tnode* al, tnode* ar) {
	aroot->left = al;
	aroot->right = ar;
}

//전위순회
void preorderTree(tnode* aroot) {
	if (aroot == NULL) {
		return;
	}
	printf("%c", aroot->ch);
	preorderTree(aroot->left);
	preorderTree(aroot->right);
}

//중위순회
void inorderTree(tnode* aroot) {
	if (aroot == NULL) {
		return;
	}
	inorderTree(aroot->left);
	printf("%c", aroot->ch);
	inorderTree(aroot->right);
}

//후위순위
void postorderTree(tnode* aroot) {
	if (aroot == NULL) {
		return;
	}
	postorderTree(aroot->left);
	postorderTree(aroot->right);
	printf("%c", aroot->ch);
}

void binaryTree() {
	tnode* t1 = createNode('a');
	tnode* t2 = createNode('b');
	tnode* t3 = createNode('c');
	tnode* t4 = createNode('d');
	tnode* t5 = createNode('e');
	tnode* t6 = createNode('f');
	tnode* t7 = createNode('g');
	tnode* t8 = createNode('h');
	tnode* t9 = createNode('i');
	
	//printf("%c %c %c\n", t1->ch, t2->ch, t3->ch);

	makeTreeNode(t1, t2, t3);
	makeTreeNode(t2, t4, t5);
	makeTreeNode(t3, t6, t7);
	makeTreeNode(t4, t8, NULL);
	makeTreeNode(t5, NULL, t9);

	//printf("%c %c %c\n", t1->ch, t1->left->ch, t1->right->ch);

	preorderTree(t1);
	printf("\n");
	inorderTree(t1);
	printf("\n");
	postorderTree(t1);
	printf("\n");
}