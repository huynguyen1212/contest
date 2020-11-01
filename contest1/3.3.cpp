#include <bits/stdc++.h>
using namespace std;

int n, a[10000];
void genNext();
void Display();
void Solve() {
	cin >> n;
	a[0] = 10000000; //de a[0] lon nhat. k bao h dungf
	for(int i=1; i<=n; i++) {
		cin >> a[i];
	}
	genNext();
	Display();
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
}

void Display() {
	for(int i=1; i<=n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void genNext() {
	int pos=0;
	for(int i=n; i>1; i--) {
		if (a[i] > a[i-1]) {
			pos = i-1;
			break;
		}
	}
	for(int i=n; i>=1; i--) {
		if (a[i] > a[pos]) {
			swap(a[i], a[pos]);
			break;
		}
	}
	int l = pos + 1, r = n;
	while (l<r) {
		swap(a[l], a[r]);
		l++;
		r--;
	}
}
