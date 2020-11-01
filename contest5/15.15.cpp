#include <bits/stdc++.h>
using namespace std;

// thuat toan
// giong bai tim xau con chung dai nhat cua hai sau, giong luon bai tim xau con lap nhieu nhat
// cong duong cheo chinh
int dp[101][101][101];

void Solve() {
	int n, m, k;
	cin >> n >> m >> k;
	string a, b, c;
	cin >> a >> b >> c;
	memset(dp, 0, sizeof(dp));
	for (int i = 1; i <=n; i++) {
		for (int j = 1; j <= m; j++) {
			for (int l = 1; l <= k; l++) {
				if (a[i - 1] == b[j - 1] && b[j - 1] == c[l - 1])
					dp[i][j][l] = dp[i - 1][j - 1][l - 1] + 1;
				else
					dp[i][j][l] = max(dp[i - 1][j][l], max(dp[i][j - 1][l], dp[i][j][l - 1]));
			}
		}
	}
	cout << dp[n][m][k] << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

