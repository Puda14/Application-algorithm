#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

int n,m,s,t;
vector<vector<pair<int,int>>> adj(N);
vector<bool> vis(N,false);
vector<int> dist(N,-1);

int dijkstra(int bg, int en){
    priority_queue<pair<int,int>> pq;
    dist[bg] = 0;
    pq.push({0,bg});
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        for(auto x:adj[u]){
            int v = x.first;
            int w = x.second;
            if(dist[v] == -1 || dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                pq.push({-dist[v],v});
            }
        }
    }
    return dist[en];
}


int main()
{
    cin >> n>> m;
    int u,v,w;
    for(int i = 0 ; i < m ; i++){
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
    }
    cin >> s >> t;
    cout << dijkstra(s,t);
    return 0;
}
