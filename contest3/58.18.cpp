#include <bits/stdc++.h>
using namespace std;

// thuat toan

void Solve() {
	int n;
	cin >> n;
	int x = n / 7;
	int y = n / 4;
	long long sum = 0;
	for (int i = x; i >= 0 ; i--) { // cong tung thang 7 trc 
		for (int j = 0; j <= y; j++) { // cong tiep nhieu thang 4 xem co dc k, k ddc thi moi cong them mot thang 7 roi cong 4 lai
			sum = 7 * i + 4 * j;
			if (sum < n) {
				continue;
			}
			else {
				if (sum > n) break;
				else {
					for (int k = 0; k < j; k++) cout << "4";  // so nho nhat nen in 4 trc
					for (int k = 0; k < i; k++) cout << "7";
					cout << endl;
					return; // thoat ham Solve, k chay tiep cau lenh in ra -1
				}
			}
		}
	}
	cout << "-1" << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

