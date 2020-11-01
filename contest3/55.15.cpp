#include <bits/stdc++.h>
using namespace std;

// thuat toan
// neu so luong thuc mua dc trong tuan (6 * n) nho hon so luong thuc tieu thu trong tuan (7 * m) va so ngay phai song soy lon hon 6 hoac so tieu thu trong mot ngay lon hon so dc mua trong mot ngay thi:
	// cout ra -1
	// k thi cout ra so ngay nho nhat

// (k the song sot trong 10 ngay ma voi luong thuc phai mua trong 15 ngay)
int n, s, m;

void Solve() {
	cin >> n >> s >> m;
	if (6*n < 7*m && s > 6 || m > n)
		cout << -1 << endl;
	else {
		int tmp = (m * s) / n;
		if((m * s) % n != 0) tmp++;
		cout << tmp << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

