#include <iostream>
#include <vector>
using namespace std;

vector<int> oddNumbers(int l, int r) {
	vector<int> result;
	for (int i = l; i <= r; i++) {
		if (i % 2 != 0) {
			result.push_back(i);
		}
	}
	return result;

}

int main(void) {
	int l = 2;
	int r = 5;

	vector<int> result = oddNumbers(l, r);

	for (int i = 0; i < result.size(); i++) {
		cout << result[i];

		if (i != result.size() - 1) {
			cout << "\n";
		}
	}
	return 0;
}