#include <bits/stdc++.h>
using namespace std;

// thuat toan
// phai xem xet nhung vi tri co the lien quan giua hai day

int Search(long long a[], long long b[], int l, int r) {
	if (l > r) return -1;
	if (a[r] != b[r - 1]) return r;								// neu hai thang cuoi khac nhau thi xuat luon vi tri cuoi
	int mid = (l + r) / 2;
	if (a[mid - 1] == b[mid - 1] && a[mid] != b[mid])
		return mid;												// xet vi tri giua hai day
	if (a[mid] == b[mid]) return Search(a, b, mid + 1, r);		// xet tu giua den cuoi hai day
	return Search(a, b, l, mid - 1);							// xet nua dau hai day
}

void Solve() {
	int n;
	cin >> n;
	long long a[n + 5];
	long long b[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		cin >> b[i];
	}
	cout << Search(a, b, 0, n - 1) + 1 << endl;					// cong 1 do mang a, b bat dau tu 0
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

