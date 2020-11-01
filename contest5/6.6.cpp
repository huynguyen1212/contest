#include <bits/stdc++.h>
using namespace std;

// thuat toan

int dp[1005][1005];

void Solve() {
	string s;
	cin >> s;
	int n = s.size();
	memset(dp, 0, sizeof(dp));
	int ans = 1;
	for (int i = 0; i < n; i++) {
		dp[i][i] = 1;						// cho duong cheo chinh cua dp bang 1
	}
	// neu s co hai phan tu
	for (int i = 0; i < n - 1; i++) {		// i < n - 1 do neu chay den phan tu cuoi thi cung la phan tu cuoi cua duong cheo chinh da = 1
		if (s[i] == s[i + 1]) {
			dp[i][i + 1] = 1;
			ans = 2;
		}
	}
	// s >= 3 phan tu
	for (int k = 3; k <= n; k++) {
		for (int i = 0; i < n - k + 1; i++) {
			int j = i + k - 1;
			if (s[i] == s[j] && dp[i + 1][j - 1]) {		// dp[i+1][j-1] == 1 la phan tu giua
				dp[i][j] = 1;							// danh dau 1 cho dp tu trong ra
				ans = k;
			}
		}
	}
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

