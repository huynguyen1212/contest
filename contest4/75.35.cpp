#include <bits/stdc++.h>
using namespace std;

// thuat toan
// chia giua ra tinh hai ben xong ss hai ben va ss hai ben voi ca day

const long long base = 1e9 + 7;
int n, a[1000];

int maxSubArrayHaveMid(int l, int m, int r) {
	// SubArray max in left
	int sum = 0;
	int sum_l = -base;
	for (int i = m; i >= l; i--) {
		sum += a[i];
		sum_l = max(sum_l, sum);
	}
	// SubArray max in right
	sum = 0;
	int sum_r = -base;
	for (int i = m + 1; i <= r; i++) {
		sum += a[i];
		sum_r = max(sum_r, sum);
	}
	return max(max(sum_l, sum_r), sum_l + sum_r);		// tra ve max cua mot trong hai ben hoac car dayx
}

int maxSubArray(int l, int r) {
	if (l >= r) return a[l];
	int mid = (l + r) / 2;
	return max(max(maxSubArray(l, mid), maxSubArray(mid + 1, r)), maxSubArrayHaveMid(l, mid, r));
}

void Solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << maxSubArray(0, n - 1) << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

