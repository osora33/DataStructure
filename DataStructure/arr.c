#include "���.h"

void arr() {
	int size;

	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &size);
	printf("%d���� ���� ���� �迭�� ����ϴ�.\n", size);

	//�迭 ���� �ڵ�
	int* arr = malloc(size * sizeof(int));

	printf("%d���� ������ �Է��ϼ���\n", size);
	//�迭�� �Է��ϴ� �ڵ� �ۼ�
	for (int i = 0; i < size; i++) {
		printf("������ �Է��ϼ��� : ");
		//scanf("%d", &arr[i]);
		scanf("%d", arr+i);
	}

	for (int i = 0; i < size; i++) {
		//printf("\n�Է¹��� ���� ��� : %d", arr[i]);
		printf("\n�Է¹��� ���� ��� : %d", *(arr+i));
	}
	free(arr);
}