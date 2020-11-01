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
void bfs(int u)
{
    queue <int> q;
    q.push(u);
    check[u]=1;
    while (!q.empty())
    {
        int t=q.front();   q.pop();
        for(int i=1;i<=V;i++)
        {
            if(check[i]==0 && a[t][i]==1)
            {
                check[i]=1;
                q.push(i);
            }
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
        a[y][x]=1;
    }
    int res=0;
    for(int i=1;i<=V;i++)
    {
        if(check[i]==0)
        {
            res++;
            bfs(i);
        }
    }
    cout<<res<<endl;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}