#include <bits/stdc++.h>
using namespace std;

// thuat toan

// nhap n, a[i]

// sap xep mang a

// tao hai gia tri de cong
// so dau tien la ghep cua ca so co i chan trong mang a				(xen ke)
// so sau la cac so co i le trong mang a							(xen ke)


void Solve() {
	int n;
	cin >> n;
	int a[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	long long num1 = 0, num2 = 0;
	for (int i = 0; i< n; i++) {
		// tao hai so nho nhat la hai so co i xen ke
		if (i % 2 == 0)	 {
			num1 *= 10;
			num1 += a[i];
		}
		else {
			num2 *= 10;
			num2 += a[i];
		}
	}
	cout << num1 +num2 << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

