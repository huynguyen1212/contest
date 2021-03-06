// Kiem tra tinh lien thong manh BFS
#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool ok[1005];

void BFS(int u) {
	queue<int> q;
	q.push(u);
	while (!q.empty()) {
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
	memset(ok, 0, sizeof(ok));
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		int u, v;
		cin >> u >> v;
		ke[u].push_back(v);
	}
	int res = 0;
	for (int i = 1; i <= a; i++) {
		if(!ok[i]) {
			res++;
			BFS(i);
		}
	}
	if (res >= 2) cout <<  "NO";
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

