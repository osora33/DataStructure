#include "���.h"
#define arrLen 5

void compare2() {
	int arr[arrLen];
	int tmp;
	int flag = 0;

	for (int i = 0; i < arrLen; i++) {
		printf("������ �Է��ϼ��� : ");
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

	printf("\n�Է¹��� ���� �� ���� ū �� : %d", arr[0]);
}