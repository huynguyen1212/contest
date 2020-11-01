#include <bits/stdc++.h>
using namespace std;

// thuat toan
// khoi tao bien nho = 0, vector rs
// neu a>0 hoac b>0 thi :
	// khoi tao bien temp = tong cua chia lay du cua a va b va nho
	// nho = temp / k
	// dua chia lay du cua temp % k va vector rs
	// a = a/10 (de a giam dan)
	// b = b/10 (de b giam dan)
// neu nho khac 0 thi dua nho vao vector rs
// xuat nguoc vector rs

void Solve() {
	int k;
	long long a, b;
	cin >> k >> a >> b;
	vector<int> rs;
	int nho = 0;
	while (a > 0 || b > 0) {
		int temp = (a % 10 + b % 10 + nho);
		nho = temp / k;
		rs.push_back(temp % k);
		a /= 10;
		b /=10;
	}
	if (nho != 0) {
		rs.push_back(nho);
	}
	for (int i = rs.size() - 1; i >= 0; i--) {
		cout << rs[i];
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

