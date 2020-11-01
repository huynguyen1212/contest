#include <bits/stdc++.h>
using namespace std;

// thuat toan
// so sanh mot so voi cac so dung trc no
	// neu lon hon thi lay max dp tai so do voi dp tai so dc ss +1
// cuoi cung so sanh ans voi cac dp cuoi cung nhan dc roi xuat so lon nhat

void Solve() {
	int n;
	cin >> n;
	int a[n + 5];
	int dp[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		dp[i] = 1;						// khoi tao mang dp tat ca co gia tri la 1( do luon co 1 thoa man)
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j])
				dp[i] = max(dp[i], dp[j] + 1);
			//cout << dp[i] << " ";
		}
		//cout << endl;
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		
		ans = max(ans, dp[i]);
	}
	cout << ans << endl;
}

int main() {
	int t = 1;
	//cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

