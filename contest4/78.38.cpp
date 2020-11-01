#include <bits/stdc++.h>
using namespace std;

int m, n;
int a[10000005], b[10000005];

int Search(int a[], int m, int b[], int n, int k) {
	if (k < 1 || k > n + m) return -1;							// khong tim dc do nam ngoai vung tim kiem
	if (m > n) return Search(b, n, a, m, k);							// luon de mang a nho hon mang b(mang nho hon dung trc)
	if (m == 0) return b[k - 1];									// neu khong co mang a thi lay luon tai vi tri k-1 cua b(do b bat dau tu 0)
	if (k == 1) return min(a[0], b[0]);							// neu k la vi tri dau thi lay min cua (a[0] va b[0])
	
	// tao mang gop cua hai mang a, b
	int minA = min(m, k / 2);
	int minB = min(n, k / 2);
	if (a[minA - 1] > b[minB - 1])
		return Search(a, m, b + minB, n - minB, k - minB);
	else 
		return Search(a + minA, m - minA, b, n, k - minA); 
}

void Solve() {
	int k;
	cin >> m >> n >> k;
	int a[m + 5], b[n + 5];
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	cout << Search(a, m, b, n, k) << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

