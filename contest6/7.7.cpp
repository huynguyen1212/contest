#include <bits/stdc++.h>
using namespace std;

// thuat toan
// tao hai vector roi sx 1 vector
	// so sanh hai vector
		// ss tu dau neu thay phan tu khac dau tien thi do la vi tri bat dau cua mang con
		// ss tu cuoi neu thay ptu khac dau tien thi do la vi tri cuoi cua mang con

void Solve() {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	int l = 0, r = 0;
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			l = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] != b[i]) {
			r = i;
			break;
		}
	}
	cout << l + 1 << " " << r + 1 << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

