#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector< vector <int> > a;
vector<vector <int> > dinh;
int xuli(string s)
{
    int t=0;
    for(int i=0;i<s.length();i++) t=t*10 + (s[i]-'0');
    return t;
}
void solve()
{
    int n;
    cin>>n; cin.ignore();
    dinh.resize(n+1);
    for(int i=0;i<=n;i++) dinh[i].clear();
    for(int i=1;i<=n;i++)
    {
        string s;
        getline(cin,s);
        //cout<<s<<endl;
        string tmp="";
        for(int j=0;j<s.length();j++)
        {
            if(s[j]==' ')
            {
                int t=xuli(tmp);
                //cout<<tmp<<' '<<t<<endl;
                if(t>i) dinh[i].push_back(t);
                tmp="";
            }
            else tmp=tmp+s[j];
        }
        //cout<<tmp<<endl;
        int t=xuli(tmp);
        if(t>i) dinh[i].push_back(t);
    }
    for(int i=1;i<=n;i++)
    {
        if(dinh[i].size()!=0)
        {
            for(int j=0;j<dinh[i].size();j++)
            {
                cout<<i<<' '<<dinh[i][j]<<endl;
            }
        }
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