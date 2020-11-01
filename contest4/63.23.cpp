#include <bits/stdc++.h>
using namespace std;

// thuat toan
// cho bien mid = 2^(n-1) (de chia day ra)
	// neu k = mid xuat ra n
	// k < mid lam lai voi n = n - 1, k
	// k > mid lam lai voi n = n - 1, k = k - mid

long long poww(long long x, long long y) {
	long long ans = 1;
	for (int i = 0; i < y; i++) {
		ans *= x;
	}
	return ans;
}

long long find(long long n, long long k) {
	long long mid = poww(2, n - 1);
	if (k == mid) return n;
	if (k < mid) return find(n - 1, k);
	if (k > mid) return find(n - 1, k - mid);
}

void Solve() {
	long long n, k;
	cin >> n >> k;
	cout << find(n, k) << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

