#include <bits/stdc++.h>
using namespace std;

// thuat toan

// tao struct de luu cac gia tri cong viec N

// cho tat ca phan tu cua mang check = true

// sap xep gia tri giam dan cho val

// cho j chay tu min (n va s[i].time) - 1 den 0
	// check[j] = true thi
		// so cong viec job ++
		// sumVal += s[i].val
		// cho check[j] = false
		// break
// tinh tiep
	
struct mincy {
	int time;
	int val;
};

bool cmp(mincy a, mincy b) {
	return a.val > b.val;
}

void Solve() {
	int n;
	cin >> n;
	mincy s[n + 5];
	int a[n + 5], b[n + 5];
	bool check[n + 5];
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		cin >> s[i].time >> s[i].val;
	}
	memset(check, true, sizeof(check));
	sort(s, s + n, cmp);
	int job = 0, sumVal = 0;
	for (int i = 0; i < n; i++) {
		for (int j = min(n, s[i].time) - 1; j >= 0; j--) {
			if (check[j]) {
				job++;
				sumVal += s[i].val;
				check[j] = false;
				break;
			}
		}
	}
	cout << job << " " << sumVal << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

