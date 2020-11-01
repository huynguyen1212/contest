// Kiem tra duong di
#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1001];
bool ok[1001];

void BFS(int u, int v) {
	queue<int> q;
	q.push(u);
	while (q.size() > 0) {
		int top = q.front();
		q.pop();
		ok[top] = true;
		if (top == v) {
			cout << "YES";
			return;
		}
		for (int i = 0; i < ke[top].size(); i++) {
			if(!ok[ke[top][i]]) {
				ok[ke[top][i]] = true;
				q.push(ke[top][i]);
			}
		}
	}
	cout << "NO";
}

void Solve() {
	for (int i = 0; i < 1001; i++) {
		ke[i].clear();
	}
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		int u, v;
		cin >> u >> v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	
	int Q;
	cin >> Q;
	while (Q--) {
		memset(ok, false, sizeof(ok));
		int x, y;
		cin >> x >> y;
		BFS(x, y);
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
