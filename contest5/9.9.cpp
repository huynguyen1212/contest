#include <bits/stdc++.h>
using namespace std;

const long long base = 1e9 + 7;
long long dp[1005][1005];
int n, k;

void Solve() {
	cin >> n >> k;
	memset(dp, 0, sizeof(dp));
	dp[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			for (int m = 0; m <= 9; m++) {					// cac chu so tu 0 den 9
				if (i == 1 && m ==0) continue;				// so k dau tien k dc tinh
				if (m <= j) {
					dp[i][j] = (dp[i][j] % base + dp[i - 1][j - m] % base) % base; // cong don xuong tu hai so tren ket qua
				}
				cout << dp[i][j] << " ";
			}
			cout << endl;
		}
	}
	cout << dp[n][k] << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

