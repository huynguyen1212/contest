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
void bfs(int u,int x,int y)
{
    queue <int> q;
    q.push(u);
    check[u]=1;
    while (!q.empty())
    {
        int t=q.front();   q.pop();
        for(int i=0;i<ke[t].size();i++)
        {  
            if(t==x && ke[t][i]==y) continue;
            if(t==y && ke[t][i]==x) continue;
            if(check[ke[t][i]]==0)
            {
                check[ke[t][i]]=1;
                q.push(ke[t][i]);
            }
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
            bfs(i,0,0);
        }
    }
    for(int i=0;i<canhcau.size();i++)
    {
        memset(check,0,sizeof(check));
        int x=canhcau[i].first; int y=canhcau[i].second;
        int dem=0;
        for(int i=1;i<=V;i++)
        {
            if(check[i]==0)
            {
                dem++;
                bfs(i,x,y);
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