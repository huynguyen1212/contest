// Tim duong di theo BFS voi do thi co huong
#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1001];
bool ok[1001];
int truoc[1001];

void BFS(int u, int v) {
	queue<int> q;
	q.push(u);
	while (q.size() > 0) {
		int top = q.front();
		q.pop();
		if(v == top) return;
		for(int i = 0; i < ke[top].size(); i++) {
			if(!ok[ke[top][i]]) {
				ok[ke[top][i]] = true;
				truoc[ke[top][i]] = top;
				q.push(ke[top][i]);
			}
		}
	}
}

void Trace(int u, int v) {
	if (!ok[u]) {
		cout << -1;
		return;
	}
	vector<int> a;
	while (u != v) {
		if(u == 0) {
			cout << -1;
			return;
		}
		a.push_back(u);
		u = truoc[u];
	}
	a.push_back(v);
	reverse(a.begin(), a.end());
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
}

void Solve() {
	for(int i = 0; i < 1001; i++) {
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
	BFS(nguon, dich);
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

