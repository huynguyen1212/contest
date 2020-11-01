#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int a[1005][1005];
vector< vector <int> > ke;
void solve()
{
    int v,e;
    cin>>v>>e;
    ke.resize(v+1);
    for(int i=0;i<=v;i++) ke[i].clear();
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        ke[x].push_back(y);
    }
    for(int i=1;i<=v;i++)
    {
        sort(ke[i].begin(),ke[i].end());
        cout<<i<<": ";
        for(int j=0;j<ke[i].size();j++) cout<<ke[i][j]<<' ';
        cout<<endl;
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}
