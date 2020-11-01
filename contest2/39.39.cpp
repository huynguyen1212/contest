#include <bits/stdc++.h>
using namespace std;

string s; // xau dau tien
long long n, m; // m la so tu nhien nhap vao

void Find(long long m, long long l) {
	if (m <= n) { //neu sau s cso do dai lon hon so tu nhien nhap vao
		cout << s[m] << endl;
		return;
	}
	
	if (m <= l / 2) {
		return Find(m, l / 2);
	}
	else if (m == (l / 2 + 1)) {
		return Find(l / 2, l / 2);
	}
	else  {
		return Find(m - l / 2 - 1, l / 2);
	}
}

void Solve() {
	cin >> s;
	cin >> m;
	n = s.size();
	long long l = s.size();
	s = ' ' + s;
	while (l < m) l *= 2;
	Find(m, l);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

