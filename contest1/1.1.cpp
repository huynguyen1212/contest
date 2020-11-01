#include <bits/stdc++.h>
using namespace std;

int n;
int a[100];
void genNext ();
void Display ();

void Solve () {
	string s;
	cin >> s;
	n = s.size();
	for (int i=0; i<s.size(); i++) {
		a[i] = (int)(s[i] - '0');
	}
	genNext();
	Display();
}
int main() {
	int t = 1;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		Solve();
	}
}

void Display() {
	for( int i=0; i<n;i++) {
		cout << a[i];
	}
	cout << endl;
}

void genNext() {
	for(int i=n-1; i>=0; i--) {
		if (a[i]==1) {
			a[i]=0;
		}
		else {
			a[i]=1;
			break;
		}
	}
}
