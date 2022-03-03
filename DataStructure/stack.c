#include "���.h"
#define STACK_SZ 5

typedef int element;				//�����ڷ���

bool isEmpty();
bool isFull();
void push(element);
element pop();
element peek();

element stack[STACK_SZ];		//����
int top = -1;							//-1�̸� ������ִ�

void Stack() {

}

bool isEmpty() {						//������ִ��� Ȯ��
	if (top <= -1) {
		return true;
	}
	else {
		return false;
	}
}

bool isFull() {							//������ ��ȭ���� Ȯ��
	if (top >= STACK_SZ - 1) {
		return true;
	}
	else {
		return false;
	}
}

void push(element value) {		//���ÿ� ���� ����
	if (isFull()) {
		printf("STACK overflow\n");
		return;
	}
	else {
		stack[top] = value;			//top�� �ʱⰪ�� -1�̹Ƿ�
	}
}

element pop() {						//���ÿ��� ���
	if (isEmpty()) {
		printf("STACK UNDERFLOW\n");
		return 0;
	}
	else {
		return stack[top--];
	}
}

element peek() {
	if (isEmpty()) {
		printf("STACK UNDERFLOW\n");
		exit(1);
	}
	else {
		return stack[top];
	}
}