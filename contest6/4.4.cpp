#include <bits/stdc++.h>
using namespace std;

// thuat toan
// dung mang danh dau
	// nhap a vao
		// mang danh dau tai a ++
	// neu mang danh dau tai a> 0 thi do la so phan tu cua mang hop
	// neu mang danh dau tai a > 1 thi do la so phan tu cua mang giao

void Solve() {
	int n, m, a;
	cin >> n >> m;
	int d[100005] = {0};
	for (int i = 0; i < n + m; i++) {
		cin >> a;
		d[a]++;
	}
	for (int i = 0; i <= 100000; i++) {
		if (d[i] > 0) cout << i << " ";
	}
	cout << endl;
	for (int i = 0; i <= 100000; i++) { // = 100000 do de bai bao bang
		if (d[i] > 1) cout << i << " ";
	}
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

