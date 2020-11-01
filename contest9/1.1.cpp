// chuyen tu danh sach canh sang danh sach ke
#include <bits/stdc++.h>
using namespace std;

// thuat toan
// dung vector 2 chiêu

void Solve() {
	int v, e;								// so dinh va so canh
	cin >> v >> e;
	vector<int> ke[v + 5];
	for (int i = 0; i < e; i++) {
		int a, b;
		cin >> a >> b;						// nhap hai dinh
		ke[a].push_back(b);					// them dinh b vao danh sach ke cua dinh a
		ke[b].push_back(a);					// them dinh a vao danh sach ke cua dinh b
	}
	for (int i = 0; i < v; i++) {
		sort(ke[i].begin(), ke[i].end());
	}
	for (int i = 1; i <= v; i++) {
		cout << i << ":";
		for (int j = 0; j < ke[i].size(); j++) {
			cout << " " << ke[i][j];
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
