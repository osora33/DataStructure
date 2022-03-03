#include "헤더.h"

void plus() {
	int sum = 0;
	int input;

	printf("정수 입력 : ");
	scanf("%d", &input);

	for (int i = 1; i <= input; i++) {
		sum += i;
	}

	printf("입력한 정수들의 합 : %d", sum);
}