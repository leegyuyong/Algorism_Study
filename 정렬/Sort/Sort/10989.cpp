#include <iostream>
using namespace std;

int num, input;
int arr[10001];

int main(void) {
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf_s("%d", &input);
		arr[input]++;
	}
	for (int i = 0; i < 10001; i++) {
		while (arr[i] != 0) {
			printf_s("%d\n", i);
			arr[i]--;
		}
	}
}