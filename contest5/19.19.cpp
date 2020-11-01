#include <bits/stdc++.h>
using namespace std;

void Solve() {
	int n, insert, remove, copy;
	cin >> n >> insert >> remove >> copy;
	int dp[n + 5] = {0};
	// goi d[i] la thoi gian toi thieu de viet i ki tu len man hinh
	// dp[i] = dp[i - 1] + thoi gian chen them mot ki tu
	// dp[i] = dp[i / 2] + thoi gian nhau doi mot nua cua no
	
	dp[0] = 0;
	dp[1] = insert;  				// kieu gi cung phai them 1 ki tu dau tien
	for (int i = 2; i <= n; i++) {
		if (i % 2 == 1) dp[i] = min(dp[i - 1] + insert, dp[i / 2] + copy + remove);
		else dp[i] = min(dp[i - 1] + insert, dp[i / 2] + copy);
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

