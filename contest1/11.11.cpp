#include <bits/stdc++.h>
using namespace std;

void Solve() {
	string gray;
	cin >> gray;
	string b = "";
	b += gray[0];
	for (int i = 1; i < gray.size(); i++) {
		if (gray[i] == '0')
			b += b[i - 1];
		else {
			if (b[i - 1] == '0')
				b += '1';
			else 
				b += '0';
		}
	}
	cout << b << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

