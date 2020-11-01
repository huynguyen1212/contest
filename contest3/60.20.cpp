#include <bits/stdc++.h>
using namespace std;

void Solve() {
	string s;
	cin >> s;
	vector<int> vt;
	int n = s.size();
	// danh dau lai tat ca cac vi tri cua [
		// neu phan tu nao la [ thi vi tri do dc dua vao vector
	for (int i = 0; i < n; i++) {
		if (s[i] == '[')
			vt.push_back(i);
	}
	int pos = 0;					// vi tri cua [ hien tai
	int dem = 0;					// kiem tra tinh dung dan cua bieu thuc
	int ans = 0;					// ket qua
	for (int i = 0; i < n; i++) {
		if (s[i] == '[') {
			dem++;
			pos++;
		}
		else {
			dem--;
		}
		if (dem < 0) {				// khi bieu thuc sai
			ans += vt[pos] - i;
			swap(s[i], s[vt[pos]]);
			pos++;
			dem = 1;
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

