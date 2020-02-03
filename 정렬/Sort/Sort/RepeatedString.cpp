#include <iostream>
using namespace std;

long repeatedString(string s, long n) {
	int count = 0;
	long result;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a') {
			count++;
		}
	}
	result = count * (n / s.length()); // ¸ò¸¸Å­ °öÇÏ±â
	for (int i = 0; i < (n % s.length()); i++) {
		if (s[i] == 'a') {
			result++;
		}
	}
	return result;
}

int main(void) {
	string s = "aba";
	long n = 10;

	long result = repeatedString(s, n);
	cout << result << "\n";
	return 0;
}