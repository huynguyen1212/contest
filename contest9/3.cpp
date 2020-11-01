#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int a[1005][1005];
vector< vector <int> > ke;
void solve()
{
    int n;
    cin>>n;
    ke.resize(n+1);
    for(int i=1;i<=n;i++) ke.clear();
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                ke[i].push_back(j);
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        sort(ke[i].begin(),ke[i].end());
        for(int j=0;j<ke[i].size();j++) cout<<ke[i][j]<<' ';
        cout<<endl;
    }
}
main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}