#include "���.h"

void plus() {
	int sum = 0;
	int input;

	printf("���� �Է� : ");
	scanf("%d", &input);

	for (int i = 1; i <= input; i++) {
		sum += i;
	}

	printf("�Է��� �������� �� : %d", sum);
}