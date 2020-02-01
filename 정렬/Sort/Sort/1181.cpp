#include <iostream>
#include <algorithm>
using namespace std;

string arr[20000];
int num;

bool compare(string a, string b) {
	if (a.length() < b.length())
		return 1;
	else if (a.length() > b.length())
		return 0;
	else
		return a < b;
}

int main(void) {
	cin >> num;
	for (int i = 0; i < num; i++)
		cin >> arr[i];
	sort(arr, arr + num, compare);
	for (int i = 0; i < num; i++) {
		if (i > 0 && arr[i] == arr[i - 1]) continue;
		cout << arr[i] << '\n';
	}
	return 0;
}