//#include <bits/stdc++.h>
//using namespace std;
//
//int n, x, a[1000];
//int X[1000];
//int sum = 0;
//bool check = false;
//
//void Display() {
//	cout << "[";
//	for (int j = 1; j < i; j++) {
//		cout << a[X[j]] << " ";
//	}
//	cout <<a[X[i]] << "] ";
//}
//
//void Try(int i) {
//	for (int j = 1; j <= n; j++) {
//		if (sum > x)
//			return;
//		if (a[j] >= a[X[i-1]]) {
//			if (sum > x)
//				return;
//			X[i] = j;
//			sum += a[j];
//			if (sum == x) {
//				check = true;
//				Display(i);
//			}
//			else 
//				Try(i + 1);
//			sum -= a[X[i]];
//		}
//	}
//}
//
//void Solve() {
//	cin >> n >> x;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	Try(1);
//	if (check == false) 
//		cout << "-1";
//	cout << endl;
//}
//
//int main() {
//
//}

#include <bits/stdc++.h>
using namespace std;

int n, x, a[1000];
int X[1000];
int sum = 0;
bool check = false;

void Display(int i) {
	cout << "[";
	for (int j = 1; j < i; j++) {
		cout << a[X[j]] << " ";
	}
	cout << a[X[i]] << "] ";
}

void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if (sum > x)
			return;
		if (a[j] >= a[X[i - 1]]) {
			if (sum > x)
				return;
			X[i] = j;
			sum += a[j];
			if (sum == x) {
				check = true;
				Display(i);
			}
			else
				Try(i + 1);
			sum -= a[X[i]];
		}
	}
}

void Solve() {
	cin >> n >> x;
	for (int i = 1; i <= n ; i++) {
		cin >> a[i];
	}
	Try(1);
	if (check == false) cout << "-1";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}
