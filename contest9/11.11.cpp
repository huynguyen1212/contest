// Tim duong di theo DFS voi do thi co huong
#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1001];
bool ok[1001];
int truoc[1001];

void DFS(int u, int v) {
	if(ok[v]) return;
	ok[u] = true;
	for (int i = 0; i < ke[u].size(); i++) {
		if(!ok[ke[u][i]]) {
			truoc[ke[u][i]] = u;
			DFS(ke[u][i], v);
		}
	}
}

void Trace(int u, int v) {
	if(!ok[u]) {
		cout << -1;
		return;
	}
	vector<int> a;
	while(u != v) {
		////////
		if(u == 0) {
			cout << -1;
			return;
		}
		////////
		a.push_back(u);
		u = truoc[u];
	}
	a.push_back(v);
	reverse(a.begin(), a.end());
	for(int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
}

void Solve() {
	for (int i = 0; i < 1001; i++) {
		ke[i].clear();
	}
	memset(ok, 0, sizeof(ok));
	int a, b, nguon, dich;
	cin >> a >> b >> nguon >> dich;
	for (int i = 0; i < b; i++) {
		int u, v;
		cin >> u >> v;
		ke[u].push_back(v);
	}
	DFS(nguon, dich);
	Trace(dich, nguon);
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

