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
void dfs(int u,int x,int y)
{
    for(int i=0;i<ke[u].size();i++)
    {
        if(x==u && y==ke[u][i]) continue;
        if(x==ke[u][i] && y==u) continue;
        if(check[ke[u][i]]==0)
        {
            check[ke[u][i]]=1;
            dfs(ke[u][i],x,y);
        }
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
    int res=0;
    for(int i=1;i<=V;i++)
    {
        if(check[i]==0)
        {
            res++;
            check[i]=1;
            dfs(i,0,0);
        }
    }
    for(int i=0;i<canhcau.size();i++)
    {
        memset(check,0,sizeof(check));
        int x=canhcau[i].first; int y=canhcau[i].second;
        int dem=0;
        for(int j=1;j<=V;j++)
        {
            if(check[j]==0)
            {
                check[j]=1;
                dem++;
                dfs(j,x,y);
            }
        }
        if(dem>res) cout<<x<<' '<<y<<' ';
    }
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