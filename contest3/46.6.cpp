#include <bits/stdc++.h>
using namespace std;

// thuat toan

// nhap mang a, cho mang b = mang a
// sap xep mang b

// cho mid = i giua a
// chay tu mid den n
// so sanh a[mid] voi b[mid] va b[n - mid - 1]
	// neu ca hai deu khac a[mid] thi bien kiem tra bang false

void Solve() {
	int n;
	cin >> n;
	int a[n + 5];
	int b[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	bool check = true;
	int mid = n / 2;
	for (int i = mid; i < n; i++) {
		if (a[i] != b[i] && a[i] != b[n - i - 1])
			check = false;
	}
	if (check)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

