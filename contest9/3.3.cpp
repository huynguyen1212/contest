// chuyen tu ma tran ke sang danh sach ke
#include <bits/stdc++.h>
using namespace std;

// thuat toan
// nhap den dau ss voi 1 den day
	// neu = 1 thi cho vi tri do vao vector a
	// xuat vector a

void Solve() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		vector<int> a;
		for (int j = 1; j <= n; j++) {
			int so;
			cin >> so;
			if(so == 1) a.push_back(j);
		}
		for (int j = 0; j < a.size(); j++) {
			cout << a[j] << " ";
		}
		cout << endl;
	}
}

int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
	Solve();
	return 0;
}
