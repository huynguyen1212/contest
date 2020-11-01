#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
int n, x;
int a[N];

bool cmp(int a, int b) {
	return abs(a - x) < abs(b - x);
}

void Solve() {
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// sx theo dieu kien so nao tru x nho hon thi dung trc
	stable_sort(a, a + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
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

