#include <bits/stdc++.h>
using namespace std;

int n, k, a[1000];
int sum = 0;
vector<int> vt;
vector<bool> vis(1000, false);
int cnt = 0; // ctn la bien dem so tap con thoa man

void Try(int i, int S) { // S la bien cong
	if (S > sum)
		return;
	if (cnt == k)
		return;
	if (S == sum && vt.size() != 0) {
		cnt++;
		for (int j = 0; j < vt.size(); j++) {
			vis[vt[j]] = true;
		}
		return;
	}
	for (int j = i + 1; j <= n; j++) {
		if (!vis[j]) {
			vt.push_back(j);
			Try(j, S + a[j]);
			vt.pop_back();
		}
	}
}

void Solve() {
	cin >> n >> k;
	vt.clear();
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum += a[i];
		vis[i] = false;
	}
	if (k == 1) {
		cout << "1" << endl;
		return;
	}
	if (n < k) {
		cout << "0" << endl;
		return;
	}
	if (sum % k != 0) {
		cout << "0" << endl;
		return;
	}
	sum /= k;
	Try(0, 0);
	if (cnt == k)
		cout << "1" << endl;
	else 
		cout << "0" << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}
