#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

int n,m;
vector<vector<int>> adj(N);
vector<bool> vis(N,false);
vector<int> v(N,-1);
bool ok = false;

bool check(){
    for(int x:adj[1]){
        if(v[n-1] == x) return true;
    }
    return false;
}

void backtrack(int u){
    for(int x:adj[v[u-1]]){
        if(!vis[x]){
            vis[x] = true;
            v[u] = x;
            if(u == n - 1){
                if(check()) ok = true;
            }
            else backtrack(u+1);
            vis[x] = false;
        }
    }
}

void init(){
    ok = false;
    for(int i = 1 ; i <= n ; i++){
        vis[i] = false;
        v[i] = -1;
        adj[i].clear();
    }
}

void solve(){
    cin >> n >> m;
    init();
    int u,x;
    for(int i = 0 ; i < m ; i++){
        cin >> u >> x;
        adj[u].push_back(x);
        adj[x].push_back(u);
    }
    v[0] = 1;
    vis[1] = true;
    backtrack(1);
    if(ok) cout << 1 << endl;
    else cout << 0 << endl;
}


int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
