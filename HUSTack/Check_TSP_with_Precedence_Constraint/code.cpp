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
    int n;
    cin >> n;
    vector<int> x(n+1);
    for(int i = 1 ; i <= n ; i++) cin >> x[i];
    vector<vector<int>> d(n+1,vector<int>(n+1,0));
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cin >> d[i][j];
        }
    }
    int dist = 0;
    for(int i = 1 ; i < n ; i++){
        dist += d[x[i]][x[i+1]];
    }
    dist += d[x[n]][x[1]];
    vector<vector<int>> adj(n+1);
    int u,v;
    int m;
    cin >> m;
    for(int i = 0 ; i < m ; i++){
        cin >> u >> v;
        adj[u].push_back(v);
    }
    vector<bool> vis(n+1,false);
    bool ok = true;
    for(int i = 1 ; i <= n ; i++){
        u = x[i];
        vis[u] = true;
        for(int x:adj[u]){
            if(vis[x]) ok = false;
        }
    }
    if(ok) cout << dist;
    else cout << -1;
    return 0;
}
