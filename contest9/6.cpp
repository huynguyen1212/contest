#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;
int a[1005][1005];
vector< vector <int> > ke;
int check[1005];
void dfs(int u,int v)
{
    check[u]=1;
    cout<<u<<' ';
    for(int i=1;i<=v;i++)
    {
        if(check[i]==0 && a[u][i]==1)
        {
            dfs(i,v);
        }
    }
}
void solve()
{
    memset(a,0,sizeof(a));
    int v,e,u;
    cin>>v>>e>>u;
    for(int i=1;i<=v;i++) check[i]=0;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
    }
    queue <int> q;
    dfs(u,v);
    cout<<endl;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}