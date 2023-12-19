#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

int n,m;
vector<int> adj[N];
vector<bool> vis(N,false);
bool ok = true;
int color[N];

void dfs(int u,int c){
    vis[u] = true;
    color[u] = c;
    for(int v:adj[u]){
        if(!vis[v]) dfs(v,1-c);
        else{
            if(color[v] == color[u]) ok = false;
        }
    }
}


int main()
{
    cin >> n >> m;
    int u,v;
    for(int i = 0 ; i < m ; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1 ; i <= n ; i++){
        if(!vis[i]) dfs(i,0);
    }
    if(ok) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}
