#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	vector<pair<int, string> > v;
	v.push_back(pair<int, string>(50, "ȫ�浿"));
	v.push_back(pair<int, string>(90, "�̱Կ�"));
	v.push_back(pair<int, string>(60, "�ƹ���"));
	v.push_back(pair<int, string>(70, "�Ƹ���"));
	v.push_back(pair<int, string>(30, "�׽�Ʈ"));

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		cout << v[i].second << ' ';
}