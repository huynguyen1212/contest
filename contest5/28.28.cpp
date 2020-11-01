#include <bits/stdc++.h>
using namespace std;

void Solve() {
	string s1, s2;
	cin >> s1 >> s2;
	int n = s1.length();
	int m = s2.length();
	int dp[n + 2][m + 2];
	
	// goi dp[i][j] la so cách biên dôi i kí tu s1 thành j kí tu s2
	
	// dp[0][j] => ta phai chen j ki tu vao s1 => dp[0][j] = j;
	// dp[i][0] => ta xoa i ki tu trong s1 => dp[i][0] = i;
		// dp[0][j] = dp[i][0] = i + j khi ma i == 0 hoac j == 0
	// s1[i] == s2[j] thi so cach la dp[i - 1][j - 1]
	// s1[i] != s2[j]
		// th1: them vao ca hai chuoi mot ki tu
		// th2: chen them mot ki tu vao xau i-1
		// th3: xoa bot di 1 ki tu cua i
		
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (i == 0 || j == 0) 
				dp[i][j] = i + j;
			else if (s1[i - 1] == s2[j - 1])
				dp[i][j] = dp[i - 1][j - 1];
			else
				dp[i][j] = min(dp[i - 1][j - 1], min(dp[i-1][j], dp[i][j - 1])) + 1;
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

