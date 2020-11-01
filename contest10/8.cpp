#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,s;
vector<int> a[1005];
vector<pair<int,int>> res;
int vis[1005];

void Input(){
    cin >> n >> m >> s;
    res.clear();
    for(int i = 1; i <= n; i++){
        a[i].clear();
        vis[i] = 0;
    }
    for(int i = 1; i <= m; i++){
        int u,v; cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
}
void DFS(int u){
    vis[u] = 1;
    for(auto v : a[u]){
        if(vis[v] == 0){
            res.push_back({u,v});
            //cout << u << ' ' << v << '\n';
            DFS(v);
        }
    }
}
void Solve(){
    DFS(s);
    if(res.size() != n - 1){
        cout << -1 << '\n';
    }else{
        for(auto z : res){
            cout << z.first << ' ' << z.second << '\n';
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++){
        Input();
        Solve();
    }
    return 0;
}
