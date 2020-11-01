#include <bits/stdc++.h>
using namespace std;

void Try(string s, int k, string &max) {
	if (k = 0) 
		return;
	int n = s.length();
	for (int i = 0; i < n; i++) {
		for (int j = i +1; j < n; j++) {
			if (s[i] < s[j]) {
				swap(s[i], s[j]);
				if (s > max)
					max = s;
				Try(s, k - 1, max);
				swap(a[i], a[j]);
			}
		}
	}
}

void Solve() {
	string s;
	int k; // so lan chay Try lon, de chay n lan Try nho
	cin >> k;
	cin >> s;
	string max = s;
	Try(s, k, max);
	cout << max << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

