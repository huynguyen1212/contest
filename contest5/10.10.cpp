#include <bits/stdc++.h>
using namespace std;

// thuat toan
// tu mot diem thi có thê co 3 ô trc di dên 
	// nen gia tri tai diem do se bang gia tri tai diem do cong voi gia tri nho nhat cua 3 o di den

void Solve() {
	int n, m;
	cin >> n >> m;
	int a[n + 5][m + 5];
	int dp[n + 5][m + 5];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >>a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if(i == 1 && j == 1) dp[i][j] = a[i][j];
			else if(i == 1) dp[i][j] = a[i][j] + a[i][j - 1];
			else if(j == 1) dp[i][j] = a[i][j] + a[i - 1][j];
			else dp[i][j] = a[i][j] + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])); 
		}
	}
	cout << dp[n][m] << endl;
}	

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

