#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
int n,m;

int post[N];
vector<int> adj[N];
vector<int> adjj[N];
int t = 0;
vector<bool> vis(N,false);

void dfs(int u){
    t++;
    vis[u] = true;
    for(int v:adj[u]){
        if(!vis[v]) dfs(v);
    }
    t++;
    post[u] = t;
}

void dfs1(int u){
    vis[u] = true;
    for(int v:adjj[u]){
        if(!vis[v]) dfs1(v);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    int u,z;
    for(int i = 0 ; i < m ; i++){
        cin >> u >> z;
        adj[u].push_back(z);
        adjj[z].push_back(u);
    }
    for(int i = 1 ; i <= n ; i++){
        if(!vis[i]) dfs(i);
    }
    int cnt = 0;
    vector<pair<int,int>> v;
    for(int i = 1 ; i <= n ; i++) v.push_back({post[i],i});
    sort(v.begin(), v.end());
    for(int i = 1 ; i <= n ; i++) vis[i] = false;
    for(int i = v.size() - 1 ; i >= 0 ; i--){
        u = v[i].second;
        if(!vis[u]){
            cnt++;
            dfs1(u);
        }
    }
    cout << cnt << endl;
    return 0;
}
