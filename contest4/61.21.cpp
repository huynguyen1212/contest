#include <bits/stdc++.h>
using namespace std;

// thuat toan

// dung de quy
// hai truong hop dac biet
	// k = 1 in luon n
	// k = 0 in luon 1
// do so lon nen lay mu chia hai cua n
	// neu k chan thi xuat x^2
	// neu k le thi xuat x^2 * n

const long long base = 1e9 + 7;

long long poww(int n, int k) {
	if (k == 1) return n % base;
	if (k == 0) return 1;
	long long x = poww(n, k / 2);
	if (k % 2 == 0)
		return ((x % base) * (x % base)) % base;
	else 
		return ((((x % base) * (x % base)) % base) * (n % base)) % base;
}

void Solve() {
	int n, k;
	cin >> n >> k;
	cout << poww(n, k) << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		Solve();
	}
	return 0;
}

