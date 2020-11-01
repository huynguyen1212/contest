#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
int L[N] = {0};

void Solve() {
	for (int i = 0; i < N; i++) L[i] = 0;
	int n, s;
	cin >> n >> s;
	int a[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	L[0] = 1;													// de khong xet den L[0]
	for (int i = 1; i <= n; i++) {
		for (int t = s; t >= a[i]; t--) {
			if (L[t] == 0 && L[t - a[i]] == 1) L[t] = 1;		// do t vong i nao cungx bat dau chay tu s, 
																// danh dau nhung L co s - a[i] la thoa man,
																// den khi L[s] duoc danh dau 1 thi cung la luc co tong thoa man = s
																// cai da lam trc phuc vu, duong dan cho cai sau
		}
	}
	if (L[s] == 1) cout << "YES";
	else cout << "NO";
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

