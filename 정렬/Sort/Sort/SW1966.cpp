#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int T, N;
	int arr[50];
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			scanf("%d", &arr[j]);
		}
		sort(arr, arr + N);
		printf("#%d ", i + 1);
		for (int j = 0; j < N; j++)
			printf("%d ", arr[j]);
		printf("\n");
	}
	return 0;
}