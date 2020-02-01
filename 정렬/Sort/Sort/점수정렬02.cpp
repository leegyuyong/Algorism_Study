#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	vector<pair<int, string> > v;
	v.push_back(pair<int, string>(50, "홍길동"));
	v.push_back(pair<int, string>(90, "이규용"));
	v.push_back(pair<int, string>(60, "아무개"));
	v.push_back(pair<int, string>(70, "아마존"));
	v.push_back(pair<int, string>(30, "테스트"));

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		cout << v[i].second << ' ';
}