#include "���.h"

int BSearch(int* ary, int alen, int akey) {
	int first = 0;
	int last = alen - 1;
	int mid;

	while (first <= last) {
		mid = (first + last) / 2;

		if (akey == ary[mid]) {
			return mid;
		}
		else {									//����
			if (akey < ary[mid]) {		//����
				last = mid - 1;
			}
			else {								//������
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
		printf("Ž�� ����\n");
	}
	else {
		printf("Ÿ�� ���� �ε��� : %d\n", idx);
	}*/

	int ary[] = { 1, 3, 4, 5, 7, 8, 9 };
	int len = sizeof(ary) / sizeof(ary[0]);
	int key, idx;

	printf("�˻��� �Է� : ");
	scanf_s("%d", &key, sizeof(key));
	idx = BSearch(ary, len, key);
	if (idx == -1) {
		printf("�迭�� �������� �ʴ� ���Դϴ�.");
	}
	else {
		printf("�迭�� %d��°�� �����ϴ� ���Դϴ�.", idx + 1);
	}
}