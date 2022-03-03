#include "헤더.h"

int BSearch(int* ary, int alen, int akey) {
	int first = 0;
	int last = alen - 1;
	int mid;

	while (first <= last) {
		mid = (first + last) / 2;

		if (akey == ary[mid]) {
			return mid;
		}
		else {									//분할
			if (akey < ary[mid]) {		//왼쪽
				last = mid - 1;
			}
			else {								//오른쪽
				first = mid + 1;
			}
		}
	}
}

void BinarySearch() {
	/*int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1) {
		printf("탐색 실패\n");
	}
	else {
		printf("타겟 저장 인덱스 : %d\n", idx);
	}*/

	int ary[] = { 1, 3, 4, 5, 7, 8, 9 };
	int len = sizeof(ary) / sizeof(ary[0]);
	int key, idx;

	printf("검색값 입력 : ");
	scanf_s("%d", &key, sizeof(key));
	idx = BSearch(ary, len, key);
	if (idx == -1) {
		printf("배열에 존재하지 않는 값입니다.");
	}
	else {
		printf("배열의 %d번째에 존재하는 값입니다.", idx + 1);
	}
}