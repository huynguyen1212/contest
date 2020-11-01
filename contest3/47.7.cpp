#include <bits/stdc++.h>
using namespace std;

//thuat toan

// sap xep mang a tang dan, mang b giam dan
// tinh tong += nhan hai phan tu cung i o hai mang

void Solve() {
	int n;
	cin >> n;
	int a[n + 5], b[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort (a, a + n);
	sort (b, b + n, greater<int> ());
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i] * b[i];
	}
	cout << sum << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

