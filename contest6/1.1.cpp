#include <bits/stdc++.h>
using namespace std;

// thuat toan
// sap xep roi in ra dau cuoi lan luot

void Solve() {
	int n;
	cin >> n;
	int a[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n / 2; i++) {
		cout << a[n - 1 - i] << " " << a[i] << " ";
	}
	if (n % 2 == 1)
		cout << a[n / 2] << endl;
	else 
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

