#include <bits/stdc++.h>
using namespace std;

// thuat toan
// so lon nhat trong day la so chia day thanh hai
	// day con tu dau den so lon nhat la day tang
		// tinh tong day tang nay
	// day con tu so lon nhat den n la day giam
		// tinh tong day con tang dan neu tinh tu n den so o giua
// cong hai tong vao roi tru di so o giua (do so o giua cong hai lan) ta se dc max

void Solve() {
	int n;
	cin >> n;
	int a[105];
	int dp1[105], dp2[105];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		dp1[i] = a[i];
		dp2[i] = a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if(a[i] > a[j])
				dp1[i] = max(dp1[i], dp1[j] + a[i]);
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		for (int j = n; j > i; j--) {
			if (a[i] > a[j])
				dp2[i] = max(dp2[i], dp2[j] + a[i]);
		}
	}
	int res = 0;
	for (int i = 1; i <= n; i++) {
		res = max(res, dp1[i] + dp2[i] - a[i]);
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

