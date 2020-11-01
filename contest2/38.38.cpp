#include <bits/stdc++.h>
#define i64 long long
using namespace std;

const i64 oo = 1e18; 
i64 p[20] = {0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29}; // cac so nguyen to
i64 n, res = oo; // so uoc

void Try(int i, i64 ans, int cnt) { // cnt dem so uoc
	if (cnt > n)
		return;
	if (cnt == n)
		res = min(res, ans);
	for (int j = 1; ; j++) {
		if (ans * p[i] > res) // khi cnt = n thi cau lenh moi chay
			break;
		ans *= p[i];
		if (ans < 0)
			break;
		Try(i + 1, ans, cnt * (j + 1));
	}
}

void Solve() {
	res = oo;
	cin >> n;
	Try(1, 1, 1);
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

