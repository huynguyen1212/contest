#include <bits/stdc++.h>
using namespace std;

const long long base = 123456789;

// nhan nhieu lan x (nhu nhan quay lui)
//kieu : so day so thoa man dung bang 2^(n-1)
//1:1
//2:2
//3:4
//4:8
//5:16......

long long poww(long long n, long long k) {
	if (k == 1) return n % base;
	if (k == 0) return 1;
	long long x = poww(n, k / 2);
	if (k % 2 == 0) return (x % base * x % base) % base;
	else return (x % base * x % base * n % base) % base;
}

void Solve() {
	long long n;
	cin >> n;
	cout << poww(2, n - 1) << endl;
}

int main() {
	int t = 1;
	// cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

