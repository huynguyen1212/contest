#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[10000];

void Display() {
	for (int i=1; i<=k; i++) {
		cout << a[i];
	}
	cout << ' ';
}

void Try(int i) {
	for (int j=a[i-1] + 1; j <= n-k+i; j++) {
		a[i] = j;
		if (i == k) {
			Display();
		}
		else {
			Try(i+1);
		}
	}
}

void Solve () {
	cin >> n >> k;
	a[0] = 0;
	Try(1);
	cout << endl;
}
int main() {
 	int t=1;
 	cin >> t;
 	while (t--) {
 		Solve();
	}
	return 0;
}

