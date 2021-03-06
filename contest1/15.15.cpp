#include <bits/stdc++.h>
using namespace std;

int n, a[100000];

void Init();
void Display();
bool isLast();
void genNext();

int main() {
	int t;
	cin >> t; 
	while (t--) {
		int tmp;
		cin >> tmp;
		cout << tmp << ' ';
		string s;
		cin >> s;
		n = s.size();
		for (int i = 0; i < n; i++) {
			a[i + 1] = s[i] - '0';
		}
		if (isLast())
			cout << "BIGGEST" << endl;
		else {
			genNext();
			Display();
		}
	}
	return 0;
}

void Init() {
	// Khoi tao cau hinh dau tien
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
}

void Display() {
	// In ra cau hinh
	for (int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << endl;
}

bool isLast() {
	// Kiem tra da phai cau hinh cuoi chua, ham danh cho chuoi nhap da la chuoi cuoi
	for (int i = 1; i <= n-1; i++) {
		if (a[i] < a[i+1])
			return false;
	}
	return true;
}

void genNext() {
	// In cau hinh ke tiep
	int pos = -1;
	// tim dai tang dan dai nhat tu cuoi len
	for (int i = n; i > 1; i--) {
		if (a[i] > a[i - 1]) {
			pos = i - 1;
			break;
		}
	}
	// doi cho phan tu tiep theo sau day tang vua tim voi phan tu lon hon dau tien tu cuoi len
	for (int i = n; i >= 1; i--) {
		if (a[i] > a[pos]) {
			swap(a[i], a[pos]);
			break;
		}
	}
	// dao nguoc day tang sau khi doi cho
	int l = pos + 1, r = n;
	while (l < r) {
		swap(a[l], a[r]);
		l++;
		r--;
	}
}
