// chuyen danh sach ke sang ma tran ke
#include <bits/stdc++.h>
using namespace std;

int d[1005][1005];

void Solve() {
	int n;
	string s;
	cin >> n;
	cin.ignore();
	vector<int> ke[1005];
	
	for (int i = 1; i <= n; i++) {
		getline(cin, s);
		s += " ";
		int so = 0;
		int j = 0;
		while (j < s.size()) {
			if(s[j] >= '0' && s[j] <= '9')
				so = 10 * so + (int)(s[j] - '0');
			else if (so > 0) {
				ke[i].push_back(so);
				so = 0;
			}
			j++;
		}
	}
	
//	for (int i = 1; i <= n; i++) {
//		sort(ke[i].begin(), ke[i].end());
//	}

	memset(d, 0, sizeof(d));
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < ke[i].size(); j++) {
			d[i][ke[i][j]] = d[ke[i][j]][i] = 1;
		}
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << d[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	Solve();
	return 0;
}
