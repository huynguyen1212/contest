#include <bits/stdc++.h>
using namespace std;

int n, m, a[1000][1000];
int ans = 0;

void Input() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
}
	
int Try(int i, int j) {
	if (i == 1 || j == 1) {
		return 1;
	}
	return Try(i - 1, j) + Try(i, j - 1);
}

void Solve() {
	Input();
	cout << Try(n, m) << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

