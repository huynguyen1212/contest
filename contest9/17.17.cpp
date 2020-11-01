// Kiem tra tinh lien thong manh DFS
#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool ok[1005];

void DFS(int u) {
	ok[u] = true;
	for (int i = 0; i < ke[u].size(); i++) {
		if(!ok[ke[u][i]]) {
			ok[ke[u][i]] = true;
			DFS(ke[u][i]);
		}
	}
}

void Solve() {
	for (int i = 0; i < 1005; i++) {
		ke[i].clear();
	}
	memset(ok, 0, sizeof(ok));
	int a, b;
	cin >> a >> b;
	for(int i = 0; i < b; i++) {
		int u, v;
		cin >> u >> v;
		ke[u].push_back(v);
	}
	int res = 0;
	for (int i = 1; i <= a; i++) {
		if(!ok[i]) {
			res++;
			DFS(i);
		}
	}
	if (res >= 2) cout << "NO";
	else cout << "YES";
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

