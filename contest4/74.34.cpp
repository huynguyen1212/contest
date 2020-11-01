#include <bits/stdc++.h>
using namespace std;

void Solve() {
	int m, n;
	cin >> m >> n;
	int a[m + 5], b[m + 5], c[m + n + 5] = {0};
	for (int i = 0; i < m; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			c[i + j] += a[i] * b[j];			// cong doonf cac c trong tung i va j
		}
	}
	for (int i = 0; i < m + n - 1; i++) cout << c[i] << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

