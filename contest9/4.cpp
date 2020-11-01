#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int a[1005][1005];
vector< vector <int> > ke;
int xuli(string s)
{
    int t=0;
    for(int i=0;i<s.length();i++) t=t*10 + (s[i]-'0');
    return t;
}
void solve()
{
    int n;
    cin>>n; cin.ignore();
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++) a[i][j]=0;
    for(int i=1;i<=n;i++)
    {
        string s;
        getline(cin,s);
        string tmp="";
        for(int j=0;j<s.length();j++)
        {
            if(s[j]==' ')
            {
                int t=xuli(tmp);
                a[i][t]=1;
                tmp="";
            }
            else tmp=tmp+s[j];
        }
        int t=xuli(tmp);    a[i][t]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) cout<<a[i][j]<<' ';
        cout<<endl;
    }
}
main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}