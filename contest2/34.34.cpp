#include <bits/stdc++.h>
using namespace std;

int n;
bool a[1000], xuoi[1000], nguoc[1000]; // cot, cheo xuoi, cheo nguoc
int c[100][100]; // cac o trong ban co
int X[100]; // danh dau nhung o tren ban co khong bi o da dat quan hau trc do an
long long ans = 0; // bien cong cac o cua ban co trong truong hop thoa man

long long Sum() {
	long long sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += c[i][X[i]];
	}
	return sum;
}

void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if (a[j] && xuoi[i - j + n] && nguoc[i + j - 1]) { // dieu kien khong bi an
			X[i] = j;
			a[j] = false;
			xuoi[i - j + n] = false;
			nguoc[i + j - 1] = false;
			if (i == n)
				ans = max(ans, Sum());
			else
				Try(i + 1);
			a[j] = true;
			xuoi[i - j + n] = true;
			nguoc[i + j - 1] = true;
		}
	}
}

void init() {
	for (int i = 0; i < 1000; i++) {
		a[i] = true;
		xuoi[i] = true;
		nguoc[i] = true;
	}
}

void Solve() {
	n = 8;
	ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> c[i][j];
		}
 	}
 	init();
 	Try(1);
 	cout << ans << endl;
}

int main() {
	int t;
	cin>> t;
	while (t--) {
		Solve();
	}
	return 0;
}

