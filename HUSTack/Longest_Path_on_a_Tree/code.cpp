#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

int n,m;
vector<pair<int,int>> adj[N];
vector<bool> vis(N,false);
int d[N];
int p[N];

void init(){
    for(int i = 1 ; i <= n ; i++){
        d[i] = -1;
        p[i] = -1;
        vis[i] = false;
    }
}

int findMax(){
    int u = -1;
    int dist = -1;
    for(int i = 1 ; i <= n ; i++){
        if(dist < d[i]){
            dist = d[i];
            u = i;
        }
    }
    return u;
}

void bfs(int x){
    queue<int> q;
    q.push(x);
    vis[x] = true;
    d[x] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto z:adj[u]){
            int v = z.first;
            int w = z.second;
            if(!vis[v]){
                d[v] = d[u] + w;
                p[v] = u;
                vis[v] = true;
                q.push(v);
            }
        }
    }
}

int main()
{
    cin >> n;
    int u,v,w;
    for(int i = 0 ; i < n-1 ; i++){
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    init();
    bfs(1);
    u = findMax();
    init();
    bfs(u);
    u = findMax();
    cout << d[u] << endl;
    return 0;
}
