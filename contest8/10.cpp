#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
void Input(){
    cin >> n;
}

void Solve(){
    map<ll,int> vis;
    queue <pair<ll,int>> q;
    q.push({n,0}); vis[n] = 1;
    while(!q.empty()){
        auto x = q.front(); q.pop();
        if(x.first == 1){
            cout << x.second << '\n';
            return;
        }
        int m = x.first;
        for(int i = sqrt(m); i >= 2; i--){
            if(m%i == 0){
                if(vis[m/i] == 0){
                    vis[m/i] = 1;
                    q.push({m/i,x.second+1});
                }
            }
        }
        if(vis[x.first-1] == 0){
            vis[x.first-1] = 1;
            q.push({x.first-1,x.second+1});
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
