#include <stdio.h>
#include <algorithm>

int num, arr[1000000];

int main(void) {
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
		scanf_s("%d", &arr[i]);
	std::sort(arr, arr + num);
	for (int i = 0; i < num; i++)
		printf("%d\n", arr[i]);
	return 0;
}