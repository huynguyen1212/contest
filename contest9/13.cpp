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
void solve()
{
    memset(a,0,sizeof(a));
    int V,e,u,v;
    cin>>V>>e>>u>>v;
    for(int i=1;i<=V;i++) check[i]=0;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
    }
    queue <int> q;
    q.push(u);
    check[u]=1;
    while (!q.empty())
    {
        int t=q.front();    q.pop();
        //cout<<t<<' ';
        for(int i=1;i<=V;i++)
        {
            if(check[i]==0 && a[t][i]==1)
            {
                q.push(i);
                d[i]=t;
                check[i]=1;
            }
        }
    }
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
            cout<<st.top()<<' ';
            st.pop();
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