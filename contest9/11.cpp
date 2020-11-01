#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;
int a[1005][1005];
int d[1005];
int check[1005];
int V,E,u,v;
void dfs(int u)
{
    check[u]=1;
    for(int i=1;i<=V;i++)
    {
        if(check[i]==0 && a[u][i]==1)
        {
            d[i]=u;
            check[i]=1;
            dfs(i);
        }
    }
}
void solve()
{
    memset(a,0,sizeof(a));
    cin>>V>>E>>u>>v;
    for(int i=1;i<=V;i++) check[i]=0;
    for(int i=0;i<E;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
    }
    dfs(u);
    if(check[v]==0) cout<<-1<<endl;
    else
    {
        stack <int> st;
        st.push(v);
        while(st.top()!=u)
        {
            int t=st.top();
            st.push(d[t]);
        }
        while(!st.empty())
        {
            int t=st.top();st.pop();
            cout<<t<<' ';
        }
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
