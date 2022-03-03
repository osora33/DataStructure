#include "Çì´õ.h"

void swap(int arr[], int idx1, int idx2) {
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int partition(int arr[], int left, int right) {
	int pivot = arr[left];
	int low = left + 1;
	int high = right;

	while (low <= high) {
		while (pivot > arr[low]) {
			low++;
		}

		while (pivot < arr[high]) {
			high--;
		}

		if (low <= high) {
			swap(arr, low, high);
		}
	}
	swap(arr, left, high);
	return high;
}

void quickSort(int arr[], int left, int right) {
	if (left <= right) {
		int pivot = partition(arr, left, right);
		quickSort(arr, left, pivot-1);
		quickSort(arr, pivot + 1, right);
	}
}

void quickSort2(int* parr[], int left, int right) {
	int lidx = left, ridx = right;
	int tmp;
	int pivot = (left + right) / 2;

	while (lidx <= ridx) {
		while (parr[lidx] < parr[pivot]) lidx++;
		while (parr[ridx] > parr[pivot]) ridx--;

		if (lidx < ridx) {
			tmp = parr[lidx];
			parr[lidx] = parr[ridx];
			parr[ridx] = tmp;
		}
		lidx++;
		ridx--;
	}

	if (left < ridx) quickSort2(parr, left, ridx);
	if (lidx < right) quickSort2(parr, lidx, right);
}

void quickMain() {
	int arr[7] = { 3, 2, 4, 1, 7, 6, 5 };
	//int arr[3] = { 3, 3, 3 };

	int len = sizeof(arr) / sizeof(int);
	int i;

	//quickSort(arr, 0, sizeof(arr) / sizeof(int) - 1);
	quickSort2(arr, 0, sizeof(arr) / sizeof(int) - 1);

	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}