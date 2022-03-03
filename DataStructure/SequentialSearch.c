#include "헤더.h"

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
	printf("찾을 숫자를 입력하세요 : ");
	scanf("%d", &search);
	int res = LSearch2(ary, search, size);
	if (res != -1) {
		printf("%d가 배열 ary 안 %d번째에 존재합니다.", search, res+1);
	}
	else {
		printf("%d는 배열 안에 존재하지 않습니다.", search);
	}
}