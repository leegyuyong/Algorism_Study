#include <stdio.h>

int main(void) {
	int i, j, min, temp;
	int arr[10] = { 1, 10, 4, 6, 7, 2, 5, 3, 9, 8 };
	for (i = 0; i < 10; i++) {
		min = i;
		for (j = i + 1; j < 10; j++) {
			if (arr[j] < arr[min]) 
				min = j;
		}
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}