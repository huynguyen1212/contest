#include <bits/stdc++.h>
using namespace std;

// Thuat toan
// gan a[] = cac gia tien
// tao bien so luong to tien soluongtotien = 0

// vong lap khi n nhap vao con lon hon 0
// cho i chay nguoc de lay gia tri a[] tu lon nhat den nho nhat

// neu n > a[i] thi:
// soluongtotien += n/a[i]
// n -= a[i]*(n/a[i])
// xuat soluongtotien

int n;
int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void Solve() {
	cin >> n;
	int ans = 0;
	while (n > 0) {
		for (int i = 9; i >= 0; i--) {
			if (n >= a[i]) {
				ans += n/a[i];
				n -= a[i] * (n/a[i]);
			}
		}
	}
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

