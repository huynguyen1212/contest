#include <bits/stdc++.h>
using namespace std;

// thuat toan
// tim so luong tat ca cac chu trong xau s
// tim max cua cac so luong
	// neu xau s co do dai chan thi:
		// neu max > n/2 thi cout ra -1
		// k thi cout ra 1
	// neu s co do dai le thi:
		// neu max > n/2 + 1 thi cout ra -1
		// k thi cout ra 1

void Solve() {
	string s;
	cin >> s;
	int cnt[100] = {0};
	int n = s.size();
	for (int i = 0; i < n; i++) {
		cnt[s[i] - 'a']++;
	}
//  for (int i =0; i < 30; i++) {
//    	cout << cnt[i] << " ";
//	}
//	cout << "		";
	int tmp = 0;
	for (int i = 0; i < 100; i++) {
		tmp = max(tmp, cnt[i]);
	}
	if (n % 2 == 0) {
		if (tmp > n/2) cout << "-1";
		else cout << "1";
	}
	else {
		if (tmp > n/2 + 1) cout << "-1";
		else cout << "1";
	}
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

