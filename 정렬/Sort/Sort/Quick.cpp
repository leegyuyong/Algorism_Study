#include <stdio.h>

int num = 10;
int arr[] = { 1, 10, 4, 6, 7, 2, 5, 9, 3, 8 };

void show() {
	int i;
	for (i = 0; i < num; i++)
		printf("%d ", arr[i]);
}

inline void swap(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void quickSort(int arr[], int low, int high) {
	if (low >= high)
		return;
	int i = low - 1, j = low;
	int& pivot = arr[high];
	for (; j < high; j++) {
		if (arr[j] < pivot)
			swap(arr[++i], arr[j]);
	}
	swap(arr[++i], pivot);

	quickSort(arr, low, i - 1);
	quickSort(arr, i + 1, high);
}

int main(void) {
	quickSort(arr, 0, num - 1);
	show();
	return 0;
}