#include <bits/stdc++.h>
using namespace std;

void Display(int a[], int n) {
	cout << "[";
	for (int i = 0; i < n; i++) {
		if (i == 0)
			cout << a[i];
		else 
			cout << " " << a[i];
	}
	cout << "]" << endl;
}

void Try(int a[], int n) {
	int b[1000];
	if (n < 2) 
		return;
	for (int i = 0; i < n-1; i++) {
		b[i] = a[i] + a[i + 1];
	}
	Display(b, n-1);
	Try(b, n-1);
}

void Solve() {
	int n;
	cin >> n;
	int a[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	Display(a, n);
	Try(a, n);
}

int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}


