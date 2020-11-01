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
int d[1005];
int V,e;
void dfs(int u)
{
    for(int i=1;i<=V;i++)
    {
        if(check[i]==0 && a[u][i]==1)
        {
            check[i]=1;
            dfs(i);
        }
    }
}
void solve()
{
    memset(a,0,sizeof(a));
    cin>>V>>e;
    for(int i=1;i<=V;i++) check[i]=0;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
        //a[y][x]=1;
    }
    int res=0;
    for(int i=1;i<=V;i++)
    {
        if(check[i]==0)
        {
            res++;
            dfs(i);
        }
    }
    if(res==1) cout<<"YES\n";
    else cout<<"NO\n";
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}