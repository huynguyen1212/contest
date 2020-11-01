#include <bits/stdc++.h>
using namespace std;

// thuat toan
// lam trc mot mang luu day so Fibonaci F[i]
// lam 1 ham Search giam k, n
	// neu n == 1 tra 1
	// neu n == 2 tra 2
		// neu k > F[n - 2] thi lam lai voi Search(k - F[n - 2], n - 1) (lam nhu kieu dao sau)
		// neu k <= F[n - 2] thi lam lai voi Search(k, n - 2)
// neu ham Search tra 1 thi xuat ra A
// neu k thi xuat ra B
	
long long F[93];
long long n;

void Fibo() {
	F[1] = 1;
	F[2] = 1;
	for (int i = 3; i <= 92; i++) {
		F[i] = F[i - 1] + F[i - 2];
	}
}

long long Search(long long k, long long n) {
	if (n == 1) return 1;
	else if (n == 2) return 2;
	else if (k > F[n - 2]) return Search(k - F[n - 1], n - 1);
	else if (k <= F[n - 2]) return Search(k, n - 2);
}

void Solve() {
	long long k;
	cin >> n >> k;
	Fibo();
	if(Search(k, n) == 1) cout << "A" << endl;
	else cout << "B" << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

