#include <bits/stdc++.h>
using namespace std;

//thuat toan
// {
// neu mot trong hai tu hoac mau = 0 thi thoi luon
// neu so nhap sau(q) chia het so nhap trc(p) thi in luon ra 1/(q/p)
//  khoi tao n = sau / trc + 1
	// xuat ra 1/n
// }
// tiep tuc ham print voi ( trc*n-sau, sau*n)

void print(long long p, long long q) {
	if (p == 0, q == 0) return;
	if (q % p == 0) {
		cout << "1/" << q / p;
		return;
	}
	long long n = q / p + 1;
	cout << "1/" << n << " + ";
	print (p * n - q, q * n);
}

void Solve() {
	long long p, q;
	cin >> p >> q;
	print(p, q);
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

