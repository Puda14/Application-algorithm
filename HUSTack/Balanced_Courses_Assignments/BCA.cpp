#include<bits/stdc++.h>

using namespace std;

int m, n;
vector<vector<int>> adj;
int res = INT_MAX;
vector<int> load;
vector<vector<int>> store;
vector<vector<bool>> ok;

bool check(int pos, int val){
    for(int x:store[val]){
        if(ok[x][pos]) return false;
    }
    return true;
}

void backtrack(int k){
    for(int x:adj[k]){
        if(check(k,x)){
            store[x].push_back(k);
            load[x]++;
            if(load[x] <= res){
                if(k == n){
                    int maxx = 0;
                    for(int i = 1 ; i <= m ; i++) maxx = max(maxx,load[i]);
                    res = maxx;
                } else {
                    backtrack(k+1);
                }
            }
            load[x]--;
            store[x].pop_back();
        }
    }
}

int main()
{
    cin >> m >> n;
    int k, x, y;
    adj.resize(n + 1);
    load.resize(m+1);
    store.resize(m+1);
    for(int i = 1 ; i <= m ; i++) load[i] = 0;
    for(int i = 1 ; i <= m ; i++){
        cin >> k;
        for(int j = 0 ; j < k ; j++){
            cin >> x;
            adj[x].push_back(i);
        }
    }
    ok.resize(n+1);
    for(int i = 0 ; i <= n ; i++) ok[i].resize(n+1);

    cin >> k;
    for(int i = 0 ; i < k ; i++){
        cin >> x >> y;
        ok[x][y] = true;
        ok[y][x] = true;
    }
    backtrack(1);
    cout << res;
    return 0;
}
