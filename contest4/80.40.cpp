#include <bits/stdc++.h>
using namespace std;

int countZeros(int a[], int l, int r) {
	if (l > r) return l;											// dem den het va dc het day luon
	int mid = (l + r) / 2;	
	if ((mid == 0 || a[mid - 1] == 0) && a[mid] == 1) return mid;	// mid = 0 la truong hop r = 1 neu xuat mid luon
	if (a[mid] == 1) return countZeros(a, l, mid - 1);				// duyet tai nua dau
	return countZeros(a, mid + 1, r);								// neu chua thay 1 thi duyet tiep tu giua(mid) den khi thay 1 thi xuat mid
}

void Solve() {
	int n;
	cin >> n;
	int a[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << countZeros(a, 0, n - 1) << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

