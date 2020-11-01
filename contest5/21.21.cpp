#include <bits/stdc++.h>
using namespace std;

const long long base = 1e9 + 7;

void Solve() {
	int n, k;
	cin >> n >> k;
	int a[n + 5];
	long long dp[k + 5] = {0};				// dem so truong hop thoa man
	dp[0] = 1;								// do kieu gi cung co 1
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= k; i++) {			// cac tong
		for (int j = 0; j < n; j++) {		// cac gia tri a[i]
			if (i >= a[j]) {
				dp[i] = (dp[i] + dp[i - a[j]]) % base;		// = dp[i] cong voi phan thua
			}
		}
	}
	cout << dp[k] << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

