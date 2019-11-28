#include <stdio.h>

int main(void) {
	int i, j, temp;
	int arr[10] = { 1, 10, 4, 6, 7, 2, 5, 3, 9, 8 };
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 9 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}