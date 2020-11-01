#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector< vector <int> > a;
void solve()
{
    int v,e;
    cin>>v>>e;
    a.resize(v+1);
    for(int i=1;i<=v;i++) a[i].clear();
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(int i=1;i<=v;i++)
    {
        sort(a[i].begin(),a[i].end());
    }
    for(int i=1;i<=v;i++)
    {
        cout<<i<<": ";
        for(int j=0;j<a[i].size();j++) cout<<a[i][j]<<' ';
        cout<<endl;
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}