#include "헤더.h"

void arr() {
	int size;

	printf("방의 갯수를 입력하세요 : ");
	scanf("%d", &size);
	printf("%d개의 방을 갖는 배열을 만듭니다.\n", size);

	//배열 생성 코드
	int* arr = malloc(size * sizeof(int));

	printf("%d개의 정수를 입력하세요\n", size);
	//배열에 입력하는 코드 작성
	for (int i = 0; i < size; i++) {
		printf("정수를 입력하세요 : ");
		//scanf("%d", &arr[i]);
		scanf("%d", arr+i);
	}

	for (int i = 0; i < size; i++) {
		//printf("\n입력받은 정수 출력 : %d", arr[i]);
		printf("\n입력받은 정수 출력 : %d", *(arr+i));
	}
	free(arr);
}