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
    for(int i=0;i<ke[u].size();i++)
    {
        if(check[ke[u][i]]==0)
        {
            check[ke[u][i]]=1;
            dfs(ke[u][i]);
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
            dfs(i);
        }
    }
    if(res>1)
    {
        cout<<0<<endl;
        return;
    }
    int dem=0;
    for(int i=1;i<=V;i++)
    {
        if(ke[i].size()%2==1)
        {
            dem++;
        }
    }
    if(dem==0) cout<<2<<endl;
    else if(dem<=2) cout<<1<<endl;
    else cout<<0<<endl;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}