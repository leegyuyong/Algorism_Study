#include <stdio.h>

int main(void) {
	int num, i, j, temp;
	int arr[1000];

	scanf_s("%d", &num);
	for (i = 0; i < num; i++)
		scanf_s("%d", &arr[i]);
	for (i = 0; i < num-1; i++) {
		j = i;
		while (j >= 0 && arr[j] > arr[j + 1]) {
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			j--;
		}
	}
	for (i = 0; i < num; i++)
		printf("%d\n", arr[i]);
	return 0;
}