#include <bits/stdc++.h>
using namespace std;

const long long base = 1e9 + 7;

void Solve() {
	// ways(n,m) = ways(n-1, m) + ways(n-2, m) + ... ways(n-m, m)
	int n, k;
	cin >> n >> k;
	long long tmp = 0;
	long long res[n + 1] = {0};
	res[0] = 1;
	for (int i = 1; i <= n; i++) {
		int limit = i - k - 1;
		if (limit >= 0) {
			tmp -= res[limit];
		}
		tmp += res[i - 1];
		res[i] = tmp % base;
	}
	cout << res[n] << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

