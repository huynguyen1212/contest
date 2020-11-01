#include <bits/stdc++.h>
using namespace std;

// thuat toan
// dung hang doi uu tien ( luon sap xep lai cac gia tri khi co gia tri moi cho vao)

// khoi tao mang a roi nhap cac phan tu a[i]
	// cho cac phan tu a[i] vao hang doi uu tien va sap xep tang dan
// khoi tao sum  = 0, ans(chi phi) = 0;
// lap khi hang doi con hai gia tri tro len
	// lay hai gia tri dau tien cua hang doi cong voi nhau = sum
	// bien cong chi phi ans += sum
	// dua tong vua cong = sum vao hang doi uu tien
//xuat ra ans

void Solve() {
	int n;
	cin >> n;
	priority_queue < int, vector<int>, greater<int> > pq; // hang doi uu tien sap xep tang dan
	int a[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		pq.push(a[i]);
	}
	long long sum = 0;
	long long ans = 0;
	while (pq.size() != 1) {
		int x = pq.top();
		pq.pop();
		int y = pq.top();
		pq.pop();
		sum = x + y;
		ans += sum;
		pq.push(x + y);
	}
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

