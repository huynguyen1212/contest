#include <bits/stdc++.h>
using namespace std;

// thuat toan
// tinh nua mu
	// tinh kieu dao sau vao trong voi (n, k)
		// neu k chan thi tra ve x * x (x = ham(n, k / 2)
		// neu k le thi tra ve n * (x*x)

const long long base = 1e9 + 7;

// ham tao ra r
long long reverse(long long n) {
	long long r = 0;
	while (n>0) {
		r = r * 10 + n % 10;
		n = n / 10;
	}
	return r;
}

// ham tinh luy thua
long long poww(long long n, long long k) {
	if (k == 0) return 1;						// mu 0 luon bang 1
	long long x = poww(n, k / 2);
	if (k % 2 == 0) return (x * x % base);
	else return n * (x * x % base) % base; 
}

void Solve() {
	long long n;
	cin >> n;
	long long r = reverse(n);
	cout << poww(n, r) << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

