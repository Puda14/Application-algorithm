#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
vector<vector<int>> adj(N);
int n,m;
vector<bool> vis(N,false);

void dfs(int x){
    vis[x] = true;
    for(int v:adj[x]){
        if(!vis[v]) dfs(v);
    }
}

int main()
{
    int n,m;
    cin >> n >> m;
    int u,v;
    for(int i = 0 ; i < m; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans = 0;
    for(int i = 1 ; i <= n ; i++){
        if(!vis[i]){
            ans++;
            dfs(i);
        }
    }
    cout << ans;
    return 0;
}
