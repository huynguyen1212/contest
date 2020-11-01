#include <bits/stdc++.h>
using namespace std;

int n;
int a[100];
void Init();
void genNext();
void Display();
bool isLast();
void Solve() {
		cin >> n;
		Init();
		Display();
		while (!isLast()) {
			genNext();
			Display();
		}
		cout << endl;
}

int main() {
	int t=1;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

void Init() {
	for(int i=0; i<n; i++)
		a[i] = 0;
}

bool isLast() {
	for (int i=0; i<n; i++) {
		if (a[i] == 0)
			return false;
	}
	return true;
}

void Display() {
	for (int i=0; i<n; i++) {
		if (a[i] == 0) 
			cout << 'A';
		else 
			cout << 'B';
	}
	cout << " ";
}

void genNext() {
	for (int i = n-1; i >= 0; i--) {
		if (a[i] == 1) {
			a[i] = 0;
		}
		else {
			a[i] = 1;
			break;
		}
	}
}
