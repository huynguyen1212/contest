#include <bits/stdc++.h>
using namespace std;

// thuat toan

// nhap a[i] roi sap xep mang a
// do phai tinh so lon nen cac phan tu dc tinh phai chia lay du cho modulo

const long long modulo = 1e9 + 7;

void Solve () {
	int n;
	cin >> n;
	int a[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	long long sum  = 0;
	for (int i = 0; i < n; i++) {
		long long tmp = (a[i] * i) % modulo;
		sum = (sum % modulo + tmp % modulo) % modulo;
	}
	cout << sum << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
}

