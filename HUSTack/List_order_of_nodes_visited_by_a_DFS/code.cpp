#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
vector<set<int>> adj(N);
int n,m;
vector<bool> vis(N,false);

void dfs(int x){
    vis[x] = true;
    cout << x << ' ';
    for(int v:adj[x]){
        if(!vis[v]) dfs(v);
    }
}

int main()
{
    cin >> n >> m;
    int u,v;
    for(int i = 0 ; i < m ; i++){
        cin >> u >> v;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    for(int i = 1 ; i <= n ; i++){
        if(!vis[i]) dfs(i);
    }
    return 0;
}
