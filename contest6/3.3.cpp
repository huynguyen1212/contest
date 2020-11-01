#include <bits/stdc++.h>
using namespace std;

// thuat toan
// sap xep trc
	// neu chi so trc sap xep != chi so sau sx thi bien dem +1
		// va doi lai vi tri cac phan tu luc ban dau chua sx
	// in ra bien dem

struct dta {
	int val, pos;
};

bool cmp(dta a, dta b) {
	if (a.val < b.val) return true;
	if (a.val == b.val && a.pos < b.pos) return true;
	return false;
}

void Solve() {
	int n;
	cin >> n;
	vector<dta> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].val;
		a[i].pos = i;
	}
	sort(a.begin(), a.end(), cmp);
	int res = 0;
	for (int i = 0; i < n; i++) {
		while (a[i].pos != i) {
			res++;
			swap(a[i], a[a[i].pos]);
		}
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

