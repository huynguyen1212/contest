#include <bits/stdc++.h>
using namespace std;

int n;
int x[20], res[20];
void Result()
{
    for (int i = 1; i <= n; i++)
        cout << res[i];
    cout << ' ';
}
void Try(int k)
{
    for (int i = 0; i < 2; i++)
    {
        x[k] = i;
        res[k] = (x[k] ^ x[k - 1]);
        if (k == n)
            Result();
        else
            Try(k + 1);
    }
}
void Solve()
{
    cin >> n;
    Try(1);
    cout << endl;
}
int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        Solve();
    }
    return 0;
}
