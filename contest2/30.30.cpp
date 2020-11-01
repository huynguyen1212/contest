#include <bits/stdc++.h>
using namespace std;

vector<int> Prime;
int x[100];
int n, p, s;
vector<int> a; // cac so nguyen to co tong bang s

bool isPrime(int x) {
	if (x <= 1)
		return false;
	int tmp = sqrt(x);
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i ==0)
			return false;
	}
	return true;
}

vector<vector<int>> ans; // dem so truong hop thoa man

void Display() {
	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[i].size; j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
}

void Try(int tong, int vt) { // bat dau tu vt
	if (tong == s && a.size() == n) {
		ans.push_back(a);
		return;
	}
	if (tong > s || vt == Prime.size())
		return;
	a.push_back(Prime[vt]);
	Try(tong + Prime[vt], vt + 1);
	a.pop_back();
	Try(tong, vt + 1); // bat dau tu vt + 1
}

void Solve() {
	cin >> n >> p >> s;
	Prime.clear();
	ans.clear();
	a.clear();
	for (int i = p; i <= s; i++) {
		if (isPrime(i))
			Prime.push_back(i);
	}
	Try(0, 0);
	cout << ans.size() << endl;
	Display();
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

