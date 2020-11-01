#include <bits/stdc++.h>
using namespace std;

int floor(int a[], int l, int r, int x) {
	if (l > r) return -1;											// chay het day ma k tim dc so thoa man
	if (x >= a[r]) return r;										// lay luon vi tri so cuoi
	int mid = (l + r) / 2;
	if (a[mid] == x) return mid;										// neu bang tai giua thi xuat luon giua
	if (mid > 0 && a[mid - 1] <= x && a[mid] > x) return mid - 1;	// xet vi tri mid - 1 co thoa man
	if (x < a[mid]) return floor(a, l, mid - 1, x);					// neu x < gia tri giua day thi xet lai ham trong nua dau day do
	return floor(a, mid + 1, r, x);									// neu nhuwng dieu kien tren k dc tinh thi xet nua sau cua day so do 
}

int a[10000005];

void Solve() {
	int n, x;
	cin >> n >> x;
	for (int i = 1; i <= n; i++) {         // de bai bat dau tu 1
		cin >> a[i];
	}
	int ans = floor(a, 1, n, x);
	if (ans < 1) cout << "-1" << endl;
	else cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

