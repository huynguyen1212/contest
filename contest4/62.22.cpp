#include <bits/stdc++.h>
using namespace std;

// thuat toan 

// chia doi dai so da sap xep : mid = (l + n)/2; l bat dau tu 1
	// roi xet a[] tai vi tri giua(vi tri chia doi)
		// neu a[mid] = k thi xuat mid
		// neu lon hon thi lam lai tu vi tri l den mid - 1
		// neu nho hon thi lam tai tai vi tri mid + 1 den n
// neu k tim dc (l > n) thi in ra -1 roi kiem tra < 0 thi xuat ra NO 
	// do theo thuat toan thi n giam dan theo moi buoc k tim dc den khi ne hon l thi xuat NO

int search(int a[], int l, int r, int k) {
	int mid = (l + r) / 2;
	if (l > r) return -1;
	if (a[mid] == k) return mid;
	else if (a[mid] > k) return search(a, l, mid - 1, k);
	else return search(a, mid + 1, r, k);
}

void Solve() {
	int n, k;
	cin >> n >> k;
	int a[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (search(a, 1, n, k) < 0) cout << "NO" << endl;
	else cout << search(a, 1, n, k) << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

