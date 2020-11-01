#include <bits/stdc++.h>
using namespace std;

void Solve() {
	int n;
	cin >> n;
	int a[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	long long dp[n + 5] = {0};
	dp[1] = a[1];
	for (int i = 2; i <= n; i++) {
		dp[i] = max(a[i] + dp[i - 2], dp[i - 1]);
	}
	cout << dp[n] << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

