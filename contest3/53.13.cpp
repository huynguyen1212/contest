#include <bits/stdc++.h>
using namespace std;

// thuat toan
// tim vi tri i co cnt lon nhat la maxx

const int MAX_CHAR = 256; // so ki tu trong bang ma ASCII 

int d;
string s;

int check() {
	int n = s.size();
	int cnt[MAX_CHAR] = {0};
	for (int i = 0; i < n; i++) {
		cnt[s[i]]++;
	}
//    for (int i = 0; i < 50; i++) {
//    	cout << cnt[i];
//	}
//	cout << endl;
	int dem[MAX_CHAR] = {0};
	int maxx = -1;
	for (int i = 0; i < n; i++) {
		maxx = -1;
		for (int j = 0; j < MAX_CHAR; j++) {
			if (dem[j] <= 0 && cnt[j] > 0 && (maxx == -1 || cnt[j] > cnt[maxx])) {
				maxx = j;
			}
		}
		// cout << maxx<<endl;
		if (maxx == -1) return -1;
		cnt[maxx]--;
		dem[maxx] = d;
		for(int j = 0; j < MAX_CHAR; j++) {
			dem[j]--;
		}
	}
	return 1;
}

void Solve() {
	cin >> d;
	cin >> s;
	cout << check() << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

