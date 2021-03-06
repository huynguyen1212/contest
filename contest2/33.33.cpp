#include <bits/stdc++.h>
using namespace std;

int n;
bool a[1000], xuoi[1000], nguoc[1000]; // cot, duong cheo xuoi, duong cheo nguoc
long long ans = 0; // bien dem so truong hop thoa man

void Try(int i) { // i truyen vao la so hang lan luot tu hang 1
	for (int j = 1; j <= n; j++) {
		if (a[j] && xuoi[i - j + n] && nguoc[i + j -1]) {
			a[j] = false;
			xuoi[i - j + n] =false;
			nguoc[i + j -1] = false;
			if (i == n)
				ans ++;
			else
				Try(i + 1);
			a[j] = true;
			xuoi[i - j + n] = true;
			nguoc[i + j -1] =true;
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

int main() {
	cin >> n;
	init();
	Try(1);
	cout << ans << endl;
	return 0;
}

