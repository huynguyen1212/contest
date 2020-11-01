#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100];
void genNext();
void Display();
bool isLast() { //kiem tra da phai cau hinh cuoi chua
	for (int i=1; i<=k; i++) {
		if (a[i] != n-k+i) {
			return false;
		}
	}
	return true;
}

void Init () {
	for(int i=1; i<=k; i++) {
		a[i]=i;
	}
}

void Solve () {
	cin >> n >> k;
	for (int i=1; i<=k; i++){
		cin >> a[i];
	}
	genNext();
	if (isLast())
		Init();
	Display();
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while (t--) {
		Solve();
	}
}

void Display () {
	for(int i=1; i<=k; i++) {
		cout << a[i] << " ";
	}
	cout <<endl;
}

void genNext () {
	for (int i=k; i>=1; i--) {
		if (a[i] != n-k+i) {
			a[i]++;
			for(int j=i+1; j<=k; j++) {
				a[j] = a[j-1] + 1;
			}
		}
	}
}
