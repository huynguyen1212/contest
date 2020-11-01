#include <bits/stdc++.h>
using namespace std;

int n, a[1000];
bool check[1000];
void Init() {
	for (int i=1; i <= n; i++) {
		a[i] = i;
		check[i] = true;
	}
}

void Display() {
	for (int i=1; i <= n; i++) {
		cout << a[i];
	}
	cout << ' ';
}

void Try(int i) {
	for (int j = 1; j<=n; j++) {
		if (check[j]) {
			a[i] = j;
			check[j] = false;
			if (i == n)
				Display();
			else 
				Try(i+1);
			check[j] = true;
		}
	}
}

void Solve() {
	cin >> n;
	Init();
	Try(1);
	cout << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

