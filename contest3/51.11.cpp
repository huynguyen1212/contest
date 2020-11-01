#include <bits/stdc++.h>
using namespace std;

// thuat toan
// nhu cau 10 nhung lay du modulo 10^9 + 7 

const long long base = 1e9 + 7;

void Solve() {
	int n;
	cin >> n;
	priority_queue< long long, vector<long long>, greater<long long> > pq;
	long long a[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		pq.push(a[i]);
	}
	long long sum = 0;
	long long ans = 0;
	while (pq.size() != 1) {
		long long x = pq.top();
		pq.pop();
		long long y = pq.top();
		pq.pop();
		sum = (x % base + y % base) % base;
		ans = (ans % base + sum % base) % base;
		pq.push(x % base + y % base);
	}
	cout << ans % base;
}

int main() {
	int t = 1;
	while (t--) {
		Solve();
	}
	return 0;
}

