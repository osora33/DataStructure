#include "Çì´õ.h"

void InserSort(int arr[], int n) {
	int i, j;
	int insData;

	for (i = 1; i < n; i++) {
		insData = arr[i];
		for (j = i-1; j >= 0; j--) {
			if (arr[j] > insData) {
				arr[j + 1] = arr[j];
			}
			else {
				break;
			}
		}
		arr[j + 1] = insData;
	}
}

void InserSort2(int arr[], int n) {
	int i, j;
	int insData;

	for (i = 1; i < n; i++) {
		for (j = i; j >= 0; j--) {
			if (arr[j - 1] > arr[j]) {
				insData = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = insData;
			}
		}
	}
}

void insertionMain() {
	int arr[5] = { 5, 3, 2, 4, 1 };
	int i;

	InserSort2(arr, sizeof(arr) / sizeof(int));

	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}