#include "Çì´õ.h"

void mergeTwoArea(int arr[], int left, int mid, int right) {
	int fidx = left;
	int ridx = mid + 1;
	int i;

	int* sortArr = (int*)malloc(sizeof(int) * (right + 1));
	int sidx = left;

	while (fidx <= mid && ridx <= right) {
		if (arr[fidx] <= arr[ridx]) {
			sortArr[sidx] = arr[fidx++];
		}
		else {
			sortArr[sidx] = arr[ridx++];
		}
		sidx++;
	}

	if (fidx > mid) {
		for (i = ridx; i <= right; i++, sidx++) {
			sortArr[sidx] = arr[i];
		}
	}
	else {
		for (i = fidx; i <= mid; i++, sidx++) {
			sortArr[sidx] = arr[i];
		}
	}

	for (i = left; i <= right; i++) {
		arr[i] = sortArr[i];
	}
	free(sortArr);
}

void mergeSort(int arr[], int left, int right) {
	int mid;

	if (left < right) {
		mid = (left + right) / 2;

		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);

		mergeTwoArea(arr, left, mid, right);
	}
}

void mergeMain() {
	int arr[7] = { 3, 2, 4, 1, 7, 6, 5 };
	int i;

	mergeSort(arr, 0, sizeof(arr) / sizeof(int) - 1);

	for (i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}