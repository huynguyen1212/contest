#include <bits/stdc++.h>
using namespace std;

// thuat toan
// neu a[i][j] = 1 thi
	// ans[i][j] la min cua phan tu ben canh so voi min cua phan tu tren va phan tu cheo trai tren roi cong 1
// neu khong thi ans[i][j] = 0
// xuat ra ans lon nhat
 
void Solve() {
	int n, m;
	cin >> n >> m;
	int a[n + 5][m + 5];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	int ans[n + 5][m + 5] = {0};
	// cho cot dau tien bang nhau
	for (int i = 0; i < n; i++) {
		ans[i][0] = a[i][0];
	}
	// cho dong dau tien bang nhau
	for (int i = 0; i < m; i++) {
		ans[0][i] = a[0][i]; 
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 1)
				ans[i][j] = min(ans[i - 1][j], min(ans[i][j - 1], ans[i - 1][j - 1])) + 1;
			else
				ans[i][j] = 0;
		}
	}
	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			res = max(res, ans[i][j]);
		}
	}
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

