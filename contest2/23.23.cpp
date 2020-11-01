#include <bits/stdc++.h>
using namespace std;

int a[100][100];
bool vis[100][100];
int n;
vector<string> vt;
string ans = "";

void Try(int i, int j) {
	if (a[1][1] == 0 || a[n][n] == 0)
		return;
	if (i == n && j ==n)
		vt.push_back(ans);
	if (a[i + 1][j] == 1 && i != n && !vis[i + 1][j]) {
		ans += 'D';
		vis[i][j] = true;
		Try(i + 1, j);
		ans.erase(ans.length() - 1);
		vis[i][j] = false;
	}
	if (a[i][j+1] == 1 && j != n && !vis[i][j + 1]) {
		ans += 'R';
		vis[i][j] = true;
		Try(i, j + 1);
		ans.erase(ans.length() - 1);
		vis[i][j] = false;
	}
	if (a[i-1][j] == 1 && i != 1 && !vis[i - 1][j]) {
		ans += 'U';
		vis[i][j] = true;
		Try(i - 1, j);
		ans.erase(ans.length() - 1);
		vis[i][j] = false;
	}
	if (a[i][j - 1] == 1 && j != 1 && !vis[i][j - 1]) {
		ans += 'L';
		vis[i][j] = true;
		Try(i, j - 1);
		ans.erase(ans.length() - 1);
		vis[i][j] = false;
	}
}

void Solve() {
	ans = "";
	vt.clear();
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			a[i][j] = 0;
			vis[i][j] = false;
		}
	}
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	Try(1, 1);
	if (vt.empty())
		cout << "-1" << endl;
	else {
		//sort(vt.begin(), vt.end());
		for (int i = 0; i < vt.size(); i++) {
			cout << vt[i] << " ";
		}
		cout << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

