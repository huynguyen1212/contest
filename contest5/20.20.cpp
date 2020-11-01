#include <bits/stdc++.h>
using namespace std;

void Solve() {
	long long n;
	cin >> n;
	vector<int> a;
	while (n) {
		a.push_back(n % 10);
		n = n / 10;
	}
	reverse(a.begin(), a.end());
	long long res = 0;
	for(int i = 0; i < a.size(); i++) {
		long long tmp = 0;
		for (int j = i; j < a.size(); j++) {    
			tmp = tmp * 10 + a[j];					// tim dc cac so ddeer cong, vd: 1, 12, 123, 1234
			res += tmp;
		}
	}
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

