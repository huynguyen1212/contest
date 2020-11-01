#include <bits/stdc++.h>
using namespace std;

// thuat toan

// th1: loai nhung truong hop co tong lon hon ca so lon nhat kieu (9 * D)
// cong tu 9 xuong vao cac lan s con lon hon 9, s<9 thi cong the s cuoi va 1 vao s

int S, D;

string minNumber() {
	string ans = "";
	if (S > 9*D) return "-1";
	S--;
	for (int i = 0; i < D - 1; i++) {
		// cout << S << endl;
		if (S > 9) {
			ans = "9" + ans;
			S -= 9;
		}
		else if (S <= 9) {
			ans = char(S + '0') + ans; // + voi '0' de thanh char kieu so nguyen
			S = 0;
		}
	}
	ans = char(S + '1') + ans;
	return ans;
}

void Solve() {
	cin >> S >> D;
	cout << minNumber() << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

