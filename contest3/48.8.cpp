#include <bits/stdc++.h>
using namespace std;

// thuat toan

// sap xep tang dan theo thoi gian ket thuc F, S se duoc doi cho theo F

// so snh thoi gian ket thuc hoat dong trc voi thoi gian bat dau hoat dong sau
	// neu ktt < bds thi bien dem + 1

struct mincy {
	int l;
	int r;
};

bool cmp(mincy a, mincy b) {
	return a.r < b.r; // chir sap xep thoi gian ket thuc
}

void Solve() {
	int n;
	cin >> n;
	mincy s[n + 5];
	int a[n + 5], b[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		s[i].l = a[i];
		s[i].r = b[i];
	}
	sort(s, s + n, cmp);
	int tmp = 0;
	int ans = 1;
	for (int i = 1; i < n; i++) {
		if (s[i].l > s[tmp].r) {
			ans++;
			tmp = i;
		}
	}
	cout << ans << endl;
}	

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

