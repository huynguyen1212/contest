#include <bits/stdc++.h>
using namespace std;

// thuat toan
// tim day con tang dai nhat
// lay so phan tu cua mang ban dau tru di so phan tu cua day con tang dai nhat la ra ket qua

void Solve() {
	int n;
	cin >> n;
	int a[n + 5];
	long long res = 0;
	long long dp[n + 5];			// do dai day con tang day nhat
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for (int j = 1; j < i; j++) {
			if (a[i] > a[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		res = max(res, dp[i]);
	}
	cout << n - res << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

