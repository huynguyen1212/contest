#include <bits/stdc++.h>
using namespace std;

int n, k, s;
int a[200000000], b[200000000]; //a[] vai tro nhu bien kiem tra nhan dc 0 hay 1 trong vong for j, b[] la bien luu gia tri 1 den n
long ans = 0;

void Try(int i) {
	long long tmp1 = 0, tmp2 = 0; // tmp1 la bien dem so phan tu duoc cong, tmp2 la bien cong tinh s
	for (int j = 0; j <= 1; j++) { // de cong moi truong hop
		a[i] = j; // a[i] = 0 hoac a[i] = 1
		if (i == n - 1) { // do i bat dau tu 0, i chay tu 0 den n-1, dieu kien chay den cuoi bang chon moi thuc hien
			tmp1 = 0; // bat dau lai de tinh xem co truong hop tiep theo thoa man
			tmp2 = 0;
			for (int u = 0; u < n; u++) {
				if (a[u] == 1) { // neu chon dc 1 tren for  j thi thuc hien
					tmp1++;
					tmp2 += b[u];
				}
			}
			if (tmp1 == k && tmp2 == s)
				ans++; // thoa man thi truong hop thoa man cong 1
		}
		else 
			Try(i + 1); // chon tiep den khi i = n-1
	}
}

int main() {
	while (1) { // nhap bao nhieu chay bay nhieu, nhap vo han
		cin >> n >> k>> s;
		if (n==0 && k == 0 && s == 0) {
			break;
		}
		for (int i = 0; i < n; i++) {
			b[i] = i + 1;
		}
		Try(0);
		cout << ans << endl;
		ans = 0; // de tinh lan nhap tiep theo
	}
	return 0;
}


// vong for cua j, bang chon
//            0           1
//            0           1
//            0           1
//            0           1
//            0           1
//            0           1
//            0           1
//            0           1
//            0           1
// ..... n dong.
// chon tu duoi len

