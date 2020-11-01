#include <bits/stdc++.h>
using namespace std;

const long long base = 1e9 + 7;
int C[1005][1005];

// thuat toan
// tinh trc mot mang ahi chieu luu gia tri cua cac to hop nCk
	// moi n thi
		// k dau va cuoi = 1 (nC0 = nCn = 1)
		// k canh dau = k canh cuoi = n  (nC1 = nC(n-1) = n)
		// nhung phan tu trong thi
			// bang tong phan tu cheo trai tren cong voi phan tu tren no
// cuoi cung chi can xuat ra theo dau bai

void ToHop() {
	// cho 4 phan tu dau cua C = 1
	C[0][0] = 1;
	C[1][0] = 1;
	C[1][1] = 1;
	C[0][1] = 1;
	for (int i = 2; i <= 1000; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) C[i][j] = 1;			// phan tu dau va cuoi cua hang i bang 1
			if (j == 1 || j == i - 1) C[i][j] = i;		// phan tu canh dau va canh cuoi bang i
			else 
				C[i][j] = (C[i - 1][j - 1] % base + C[i - 1][j] % base) % base; 
		}
	}
}

void Solve() {
	int n, k;
	cin >> n >> k;
	cout << C[n][k] << endl;
}

int main() {
	int t;
	cin >> t;
	ToHop();
	while (t--) {
		Solve();
	}
	return 0;
}

