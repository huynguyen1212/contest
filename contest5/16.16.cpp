#include <bits/stdc++.h>
using namespace std;

void Solve() {
	int n;
	cin >> n;
	int a[n + 5];
	long long res = 0;
	long long dp[n + 5];
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		dp[i] = a[i];
		for (int j = 1; j < i; j++) {			// xem a[i] co noi dc vao sau a[j] khong
			if (a[i] > a[j])
				dp[i] = max(dp[i], dp[j] + a[i]);
		}
		res = max(res, dp[i]);
	}
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

