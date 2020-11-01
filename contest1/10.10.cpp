#include <bits/stdc++.h>
using namespace std;

void Solve() {
	string s;
	cin >> s;
	int n = s.size();
	int x[20] = {0}, res[20] = {0};
	for(int i = 1; i <= n; i++) {
		x[i] = s[i-1] - '0';
	}
	for (int i = 1; i <= n; i++) {
		res[i] = (x[i] ^ x[i - 1]);
	}
	for (int i=1; i <= n; i++) {
		cout << res[i];
	}
	cout << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

