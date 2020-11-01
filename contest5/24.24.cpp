#include <bits/stdc++.h>
using namespace std;

// thuat toan
// neu tu diem tren hai truc toa do thi co 1 cach, do 1 phat ve luon goc toa do
// neu khong tren truc toa do thi
	// thay vi dem so cach ve goctoa do thi t dem so cach tu goc toa do den diem do
	
void Solve() {
	int n, m;
	cin >> n >> m;
	long long dp[30][30];
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i <= 25; i++) {
		dp[i][0] = 1;
	}
	dp[0][0] = 0;
	for (int j = 0; j <= 25; j++) {
		dp[0][j] = 1;
	}
	for (int i = 0; i <= 25; i++) {
		for (int j = 0; j <= 25; j++) {
			if (i == 0 || j == 0) continue;
			dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
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

