#include "헤더.h"
#define STACK_SZ 5

typedef int element;				//스택자료형

bool isEmpty();
bool isFull();
void push(element);
element pop();
element peek();

element stack[STACK_SZ];		//스택
int top = -1;							//-1이면 비워져있다

void Stack() {

}

bool isEmpty() {						//비워져있는지 확인
	if (top <= -1) {
		return true;
	}
	else {
		return false;
	}
}

bool isFull() {							//스택의 포화상태 확인
	if (top >= STACK_SZ - 1) {
		return true;
	}
	else {
		return false;
	}
}

void push(element value) {		//스택에 원소 삽입
	if (isFull()) {
		printf("STACK overflow\n");
		return;
	}
	else {
		stack[top] = value;			//top의 초기값이 -1이므로
	}
}

element pop() {						//스택원소 출력
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