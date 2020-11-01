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
bool ktra;
bool chuaxet[1005];
int V,e;
void dfs(int u,int t)
{
    check[u]=1;
    for(int i=0;i<ke[u].size();i++)
    {
        int v=ke[u][i];
        if(check[v]==0)
        {
            check[v]=1;
            dfs(v,u);
        }
        else if(v!=t) ktra=1;
    }
}
void solve()
{
    memset(a,0,sizeof(a));
    cin>>V>>e;
    ke.resize(V+1);
    for(int i=1;i<=V;i++) 
    {
        check[i]=0;
        ke[i].clear();
    }
    vector <pair <int,int> > canhcau;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        canhcau.push_back(pair <int,int> (x,y));
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    ktra=0;
    for(int i=1;i<=V;i++)
    {
        memset(check,0,sizeof(check));
        dfs(i,0);
        if(ktra==1)
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}