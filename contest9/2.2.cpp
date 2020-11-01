// chuyen tu danh sach ke sanh danh sach canh
#include <bits/stdc++.h>
using namespace std;

void Solve() {
	int n;
	string s;
	cin >> n;
	cin.ignore();
	vector<int> ke[100];
	// tao lai danh sach ke
	for (int i = 1; i <= n; i++) {
		getline(cin,s);
		s += " ";
		int so = 0;
		int j = 0;
		while(j < s.size()) {
			if(s[j] >= '0' && s[j] <= '9')
				so = 10 * so + (int)(s[j] - '0');		// neu co so dinh la 2 chu so
			else if(so > 0) {							// truong hop gap dau cach thi kiem tra so tinh o tren co >0
				ke[i].push_back(so);
				so = 0;
			}
			j++;
		}
	}
	
	for (int i = 1; i <= n; i++) {
		sort(ke[i].begin(), ke[i].end());
	}
	
	// tao danh sach canh tu danh sach ke tren
	int d[100][100];
	memset(d, 0, sizeof(d));
	
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < ke[i].size(); j++) {
			if(!d[i][ke[i][j]] && !d[ke[i][j]][i])
				cout << i << ' ' << ke[i][j] << endl;
			d[i][ke[i][j]] = 1;
			d[ke[i][j]][i] = 1;
		}
	}
}

int main() {
	Solve();
	return 0;
}
