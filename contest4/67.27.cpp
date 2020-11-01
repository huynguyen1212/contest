#include <bits/stdc++.h>
using namespace std;

int find(long long k, long long n) {
	if (n == 1) return 1; // truong hop dac biet
	double x = log(n);
	double y = log(2);
	double z = x / y;							// tinh logarit co so 2 cua n
	long long tmp = pow(2, (long long)z);		// tim vi tri giua cua mang cuoi
	if (k == tmp) return n % 2;					// do neu k le thi kieu gi cung chia lay du  = 1 nen dc het, m 1 so 1 vao day
	else if (k % 2 == 1) return 1;
	else if (k < tmp) return find(k, n / 2);
	else if (k > tmp) return find(k - tmp, n / 2);
}

void Solve() {
	long long n, l, r;
	cin >> n >> l>> r;
	long long sum = 0;
	for (int i = l; i <= r; i++) {
		sum += find(i, n);
	}
	cout << sum << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

