#include "���.h"

void compare() {
	int a, b, max, min;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &b);

	if (a > b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}

	printf("ū �� : %d\n", max);
	printf("���� �� : %d", min);
}