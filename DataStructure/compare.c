#include "헤더.h"

void compare() {
	int a, b, max, min;

	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	printf("정수를 입력하세요 : ");
	scanf("%d", &b);

	if (a > b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}

	printf("큰 값 : %d\n", max);
	printf("작은 값 : %d", min);
}