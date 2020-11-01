#include <iostream>
using namespace std;

const long long base = 1e9 + 7;

int Fibonacci(int n)
{
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    int i = 3, a;
    while (i <= n)
    {
        a = a1 % base + a2 % base;
        a1 = a2 % base;
        a2 = a % base;
        i++;
    }
    return a % base;
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
	    cin >> n;
	    cout << Fibonacci(n) << endl;
	}
}
