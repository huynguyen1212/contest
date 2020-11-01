#include <bits/stdc++.h>
using namespace std;

// thuat toan
// cho minn va maxx bang tong a, b nhap dau tien

// chia ra hai lan cong a, cong b
	// lap a khac 0
		// neu co so 5 thi maxx = maxx + dem
		// neu co so 6 thi minn = minn - dem 
		// a = a / 10, giam di hang don vi
		// dem tang hang don vi de cong
	// khoi tao lai gia tri dem = 1 de tinh b
	// lap b khac 0 nhu a
// cout minn, maxx		

void Solve() {
	int a, b;
	cin >> a >> b;
	int sum = a + b;
	int minn = sum, maxx = sum;
	int dem = 1;
	while (a != 0) {
		if (a % 10 == 5)
			maxx += dem;
		if (a % 10 == 6)
			minn -= dem;
		a /= 10;
		dem *= 10;
	}
	dem =1;
	while (b != 0) {
		if (b % 10 ==5)
			maxx += dem;
		if (b % 10 == 6)
			minn -= dem;
		b /= 10;
		dem *= 10;
	}
	cout << minn << " " << maxx;
}

int main() {
	int t = 3;
	while (t--) {
		Solve();
	}
	return 0;
}

