#include <bits/stdc++.h>
using namespace std;

void Solve() {
	string a, b;
	cin >> a >> b;
	long long s1 = 0, s2 = 0;
	long long tmp = 1;
	// chuyen nhi phan ve so thuc
	for (int i = a.size() - 1; i >= 0; i--) {
		s1 += tmp * (a[i] - '0');
		tmp *= 2;
	}
	tmp = 1;
	for (int i = b.size() - 1; i >= 0; i--) {
		s2 += tmp * (b[i] - '0');
		tmp *= 2;
	}
	cout << s1 * s2 << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

