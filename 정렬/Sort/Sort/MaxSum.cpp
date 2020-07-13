// 최대 연속 부분 구간 합 문제

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int MIN = numeric_limits<int>::min();

int inefficientMaxSum(const vector<int>& A) {		// N^2
	int N = A.size(), ret = MIN;
	for(int i=0; i<N; ++i)
		for (int j = i; j < N; ++j) {
			int sum = 0;
			for (int k = i; k <= j; ++k)
				sum += A[k];
			ret = max(ret, sum);
		}
	return ret;
}

int betterMaxSum(const vector<int>& A) {			// N^2
	int N = A.size(), ret = MIN;
	for (int i = 0; i < N; ++i) {
		int sum = 0;
		for (int j = i; j < N; ++j) {
			sum += A[j];
			ret = max(ret, sum);
		}
	}
	return ret;
}

int fastMaxSum(const vector<int>& A, int lo, int hi) {				// NlogN
	if (lo == hi) return A[lo];

	int mid = (lo + hi) / 2;

	int left = MIN, right = MIN, sum = 0;
	for (int i = mid; i >= lo; --i) {
		sum += A[i];
		left = max(left, sum);
	}
	sum = 0;
	for (int j = mid + 1; j <= hi; ++j) {
		sum += A[j];
		right = max(right, sum);
	}
	int single = max(fastMaxSum(A, lo, mid), fastMaxSum(A, mid + 1, hi));
	return max(left + right, single);
}

int fastestMaxSum(const vector<int>& A) {							// N
	int N = A.size(), ret = MIN, psum = 0;
	for (int i = 0; i < N; ++i) {
		psum = max(psum, 0) + A[i];
		ret = max(psum, ret);
	}
	return ret;
}

int main(void) {
	vector<int> A = { -7, 4, -3, 6, 3, -8, 3, 4 };
	int result;

	//result = inefficientMaxSum(A);
	//result = betterMaxSum(A);
	//result = fastMaxSum(A, 0, A.size()-1);
	result = fastestMaxSum(A);

	printf("%d", result);
	return 0;
}