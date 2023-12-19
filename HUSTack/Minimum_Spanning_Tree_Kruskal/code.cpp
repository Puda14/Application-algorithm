#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

vector<int> r(N,0);
vector<int> parent(N,-1);

typedef struct _edge{
    int u;
    int v;
    int w;
} edge;

bool compare(const edge &a, const edge &b){
    return a.w < b.w;
}

void make_set(int v){
    parent[v] = v;
}

int find_set(int v){
    if(v == parent[v]) return v;
    else{
        parent[v] = find_set(parent[v]);
        return parent[v];
    }
}

void union_sets(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(r[a] < r[b]){
        parent[a] = b;
    } else if(r[b] < r[a]){
        parent[b] = a;
    } else {
        parent[b] = a;
        r[a]++;
    }
}


int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++) make_set(i);
    vector<edge> v(m);
    for(int i = 0 ; i < m ; i++){
        cin >> v[i].u >> v[i].v >> v[i].w;
    }
    sort(v.begin(), v.end(), compare);
    int ans = 0;
    for(edge x:v){
        if(find_set(x.u) != find_set(x.v)){
            ans += x.w;
            union_sets(x.u,x.v);
        }
    }
    cout << ans;
    return 0;
}
