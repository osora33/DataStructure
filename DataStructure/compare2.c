#include "헤더.h"
#define arrLen 5

void compare2() {
	int arr[arrLen];
	int tmp;
	int flag = 0;

	for (int i = 0; i < arrLen; i++) {
		printf("정수를 입력하세요 : ");
		scanf("%d", &arr[i]);
	}

	while (1) {
		flag = 0;
		for (int i = 0; i < arrLen; i++) {
			if (arr[i] < arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				flag = 1;
			}
		}

		if (flag == 0) {
			break;
		}
	}

	printf("\n입력받은 정수 중 가장 큰 수 : %d", arr[0]);
}