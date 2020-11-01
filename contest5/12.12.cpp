#include <bits/stdc++.h>
using namespace std;

// thuat toan
// de bai cho san cong thuc
	// chi can nhan res tu n - k + 1 den n

const long long base = 1e9 + 7;
//int P[1005][1005];

//void Solve() {
//	memset(P, 0, size(P));
//	int n, k;
//	cin >> n >> k;
//	for (int i = 0; i <= n; i++) {
//		for (int j = 0; j <= k; j++) {
//			
//		}
//	}
//}
void Solve() {
	long long n, k;
	cin >> n >> k;
	long long res = 1;
	if(k > n) res = 0;
	for (int i = n - k + 1; i <= n; i++) {
		res = (res * i) % base;
	}
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

