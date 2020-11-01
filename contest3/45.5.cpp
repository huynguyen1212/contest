#include <bits/stdc++.h>
using namespace std;

// thuat toan

// tinh tong cua mang a
// sap xep mang a
// tinh tong nho hon sau khi k chia mang thanh hai phan
// tinh tong con lai bang tong mang a tru tong vua tim
// lay tri tuyet doi cua hai tong con

void Solve() {
	int n, k;
	cin >> n >> k;
	int a[n + 5];
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a + n);
	long long sum1 = 0;
	// tinh tong nho hon cho nhanh
	if (k > n - k) 
		k = n - k;
	for (int i = 0; i < k; i++) {
		sum1 += a[i];
	}
	long long sum2 = sum - sum1;
	cout << abs(sum2 - sum1) << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

