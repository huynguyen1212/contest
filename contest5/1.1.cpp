#include <bits/stdc++.h>
using namespace std;

int dp[2005][2005]; 		// mang luu cua quy hoach dong

void Solve() {
	string a, b;
	memset(dp, 0, sizeof(dp));
	cin >> a;
	cin >> b;
	int n = a.size();
	int m = b.size();
	a = ' ' + a;
	b = ' ' + b;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i] == b[j])
				dp[i][j] = dp[i - 1][j - 1] + 1;			 // luu phan tu cheo trai tren + 1 va mang luu qhd	
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);  // luu max cua phan tu canh ben trai va tren dau no vao mang luu qhd
		}
		// tang tang tang......
//        for(int i=1;i<=n;i++){
//        for(int j=1;j<=m;j++){
//            cout << dp[i][j]<<" ";
//        }
//        cout << endl;
//     }
//    cout << endl;
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

