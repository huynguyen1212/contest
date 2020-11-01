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
void bfs(int u)
{
    queue <int> q;
    q.push(u);
    check[u]=1;
    while (!q.empty())
    {
        if(ktra==1) break;
        int x=q.front();    q.pop();
        for(int i=0;i<ke[x].size();i++)
        {
            int y=ke[x][i];
            if(check[y]==0)
            {
                q.push(y);
                check[y]=1;
            }
            else if(y==u) ktra=1;
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
    }
    ktra=0;
    for(int i=1;i<=V;i++)
    {
        memset(check,0,sizeof(check));
        bfs(i);
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