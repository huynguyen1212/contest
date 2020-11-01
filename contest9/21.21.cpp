// Liet ke canh cau DFS
#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool ok[1005];
int a, b;
vector< pair<int, int> > ans;

void Reset() {
	for (int i = 0; i < 1005; i++) {
		ke[i].clear();
	}
	memset(ok, 0, sizeof(ok));
}

void DFS(int u) {
	ok[u] = true;
	for (int i = 0; i < ke[u].size(); i++) {
		if(!ok[ke[u][i]])
			DFS(ke[u][i]);
	}
}

int TPLT() {
	int res = 0;
	for (int i = 1; i <= a; i++) {
		if(!ok[i]) {
			res++;
			DFS(i);
		}
	}
	return res;
}

void CanhCau(int canh, int res, vector< pair<int, int> > tmp) {
	for (int i = 0; i < b; i++) {
		if (i != canh) {
			ke[tmp[i].first].push_back(tmp[i].second);
			ke[tmp[i].second].push_back(tmp[i].first);
		}
	}
	int dem = TPLT();
	if(dem > res) {
		if(tmp[canh].first < tmp[canh].second)
			ans.push_back({tmp[canh].first, tmp[canh].second});
		else ans.push_back({tmp[canh].second, tmp[canh].first});
	}
}

void Solve() {
	Reset();
	ans.clear();
	vector< pair<int, int> > tmp;		// de luu tat ca cac canh
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		int u, v;
		cin >> u >> v;
		tmp.push_back({u, v});
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	
	int res = TPLT();
	for (int canh = 0; canh < b; canh++) {
		Reset();
		CanhCau(canh, res, tmp);
	}
	
	sort(ans.begin(), ans.end());
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i].first << " " << ans[i].second << " ";
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

