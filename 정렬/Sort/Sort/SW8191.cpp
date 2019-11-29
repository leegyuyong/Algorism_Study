#include <iostream>
using namespace std;

/*
int main(void) {
	int T, N, S=0, count=0;
	int arr[200000];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		for (int j = 0; j < N; j++)
			scanf("%d", &arr[j]);

		while (1) {
			for (int k = 0; k < N; k++)
				if (arr[k] == S+1)
					S++;
			count++;
			if (S == N)
				break;
		}
		printf("#%d %d\n", i + 1, count);
	}
	return 0;
}
*/
int main(void)
{
	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int N, j, count = 0;
		int arr[200001] = { 0, };
		scanf("%d", &N);

		while (N--) {
			scanf("%d", &j);
			arr[j] = 1;
			if (!arr[j - 1])
				count++;
		}
		printf("#%d %d\n", i + 1, count);
	}
	return 0;
}