#include <stdio.h>

int num = 8;
int size;
int sorted[8];
int count = 0;

void merge(int a[], int m, int mid, int n) {
	int i = m;
	int j = mid + 1;
	int k = m;

	while (i <= mid && j <= n) {
		if (a[i] <= a[j]) {
			sorted[k] = a[i];
			i++;
		}
		else {
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	if (i > mid) {
		for (int t = j; t <= n; t++) {
			sorted[k] = a[t];
			k++;
		}
	}
	else {
		for (int t = i; t <= mid; t++) {
			sorted[k] = a[t];
			k++;
		}
	}
	for (int t = m; t <= n; t++)
		a[t] = sorted[t];
}

void mergeSort(int a[], int m, int n) {
	if (m < n) {
		int mid = (m + n) / 2;
		mergeSort(a, m, mid);
		mergeSort(a, mid + 1, n);
		merge(a, m, mid, n);
	}
}

int main(void) {
	int arr[8] = { 7,6,5,8,3,5,9,1 };
	mergeSort(arr, 0, num - 1);
	for (int i = 0; i < num; i++)
		printf_s("%d ", arr[i]);
}