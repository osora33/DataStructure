#include "���.h"

int LSearch2(int* ary, int adata, int size) {
	int i = 0;
	for (int i = 0; i < size; i++) {
		if (ary[i] == adata) {
			return i;
		}
	}
	return -1;
}

void sequenceMain() {
	int search;
	int ary[] = { 1, 5, 9, 3, 8, 7, 4, 2 };
	int size = sizeof(ary) / sizeof(int);
	printf("ã�� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &search);
	int res = LSearch2(ary, search, size);
	if (res != -1) {
		printf("%d�� �迭 ary �� %d��°�� �����մϴ�.", search, res+1);
	}
	else {
		printf("%d�� �迭 �ȿ� �������� �ʽ��ϴ�.", search);
	}
}