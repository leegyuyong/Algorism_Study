#include <iostream>
#include <vector>
using namespace std;

int jumpingOnClouds(vector<int> c) {
	int count = 0;
	int i = 0;
	while (i < c.size()-1) {
		if (c[i + 1] == 0) {
			if (c[i + 2] == 0) {
				count++;
				i = i + 2;
			}
			else {
				count++;
				i = i + 1;
			}
		}
		else {
			count++;
			i = i + 2;
		}
	}
	return count;


}

int main(void) {
	int n = 7;
	vector<int> c = { 0,0,1,0,0,1,0 };

	int result = jumpingOnClouds(c);
	cout << result << "\n";
	return 0;
}