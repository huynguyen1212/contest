#include <bits/stdc++.h>
using namespace std;

int n, k, a[1000];
void Display() {
	for (int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << endl;
}

bool check() {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += a[i];
	}
	if (sum == k)
		return true;
	else 
		return false;
}

void Try (int i) {
	for (int j = 0; j < 2; j++) {
		a[i] = j;
		if (i == n) {
			if (check())
				Display();
		}
		else 
			Try(i + 1);
	}
}

void Solve() {
	cin >> n >> k;
	Try(1);
}

int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

