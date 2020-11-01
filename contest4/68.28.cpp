#include <bits/stdc++.h>
using namespace std;

// thuat toan la dung ngan xep

void Solve() {
	int n;
	cin >> n;
	int a[n + 5];
	// tao hai ngan xep de chua hai nua cua mang a[]
	stack<int> b1;
	stack<int> b2;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// sap xap a[]
	sort(a, a + n);
	int mid = n / 2;	// lay vi tri phan tu dung giua a[]
	if (n % 2 == 1) 	// neu n le thi lay o phan tu vi tri lon hon giua a[] 1 don vi
		mid++;
	for (int i = 0; i < n; i++) {
		if (i >= mid)
			b2.push(a[i]);			// dua nua phan tu lon hon cua a[] vao ngan xep b2  
		else 
			b1.push(a[i]);			// duc nua pha tu nho hon cua a[] vao b1
	}
	int ans = 0;
	while (!b1.empty() && !b2.empty()) {
		if (b1.top() > b2.top() / 2) {  		// neu phan tu cuoi b1 k bo vao dc b2 thi ans++(do no la 1 con doc lap luon), roi xoa con cuoi b1 day de xem con gan cuoi co dc k
			ans++;
			b1.pop();
		}
		else {									// neu bo vao dc thi goopj hai con cuoi dc ans++, roi xoa hai con cuoi nay di
			ans++;
			b1.pop();
			b2.pop();
		}
	}
	ans += (b1.size() + b2.size());				// cong nhung con doc lap con lai
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

