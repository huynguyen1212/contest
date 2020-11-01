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
void bfs(int u,int v)
{
    queue <int> q;
    q.push(u);
    check[u]=1;
    while(!q.empty())
    {
        int t=q.front();    q.pop();
        if(t==v)
        {
            cout<<"YES"<<endl;
            return;
        }
        for(int i=0;i<ke[t].size();i++)
        {
            if(check[ke[t][i]]==0)
            {
                q.push(ke[t][i]);
                check[ke[t][i]]=1;
            }
        }
    }
    cout<<"NO"<<endl;
}
void solve()
{
    memset(a,0,sizeof(a));
    cin>>V>>e;
    ke.resize(V+2);
    for(int i=1;i<=V;i++) ke[i].clear();
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int u,v;
        cin>>u>>v;
        for(int i=1;i<=V;i++) check[i]=0;
        bfs(u,v);
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