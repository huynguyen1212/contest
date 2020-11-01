#include <bits/stdc++.h>
using namespace std;

// thuat toan

const long long base = 1e9 + 7;

void Solve() {
	int n, k;
	cin >> n >> k;
	int a[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		a[i] = a[i] % k;
	}
	int dp[n + 1][n + 1];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			dp[i][j] = -base;							// khoi tao mang hai chieu n*k, co gia tri rat nho
		}
	}
	dp[0][0] = 0;
	// do dai day con dp[i][j] la do dai day con co tong chia k du j va ket thuc tai j
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < k; j++) {
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j - a[i] + k) % k] + 1);
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	cout << dp[n][0] << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

