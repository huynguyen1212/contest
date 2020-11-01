// Dem so thanh phan lien thong BFS
#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool ok[1005];

void BFS(int u) {
	queue<int> q;
	q.push(u);
	while (q.size() > 0) {
		int top = q.front();
		q.pop();
		ok[top] = true;
		for (int i = 0; i < ke[top].size(); i++) {
			if(!ok[ke[top][i]]) {
				ok[ke[top][i]] = true;
				q.push(ke[top][i]);
			}
		}
	}
}

void Solve() {
	for (int i = 0; i < 1005; i++) {
		ke[i].clear();
	}
	memset(ok, false, sizeof(ok));
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		int u, v;
		cin >> u >> v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	int res = 0;
	for (int i = 1; i <= a; i++) {
		if(!ok[i]) {
			res++;
			BFS(i);
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

