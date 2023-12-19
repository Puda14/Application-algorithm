#include<bits/stdc++.h>

using namespace std;

int n,q;
int d[25][25];
vector<bool> vis(25,false);
int res = INT_MAX;
int dist = 0;
vector<int> v;
int load = 0;
int minn = INT_MAX;

bool check(int pos, int val){
    if(vis[val] || val == 0) return false;
    if(val <= n){
        if(vis[val + n]) return false;
        else return true;
    } else {
        if(!vis[val - n]) return false;
        else return true;
    }
}

void backtrack(int k){
    for(int i = 1 ; i <= 2 * n ; i++){
        if(check(k,i)){
            vis[i] = true;
            v[k] = i;
            if(i <= n) load++;
            else if(i > n) load--;
            dist += d[v[k-1]][v[k]];
            if(dist + minn * (2 * n + 1 - k)< res && load <= q){
                if(k == 2 * n) res = min(res,dist + d[v[k]][0]);
                else backtrack(k+1);
            }
            vis[i] = false;
            dist -= d[v[k-1]][v[k]];
            if(i <= n) load--;
            else if(i > n) load++;
        }
    }
}
int main()
{
    cin >> n >> q;
    v.resize(2 * n + 2);
    v[0] = 0;
    v[2 * n + 1] = 0;
    for(int i = 0 ; i <= 2 * n ; i++){
        for(int j = 0 ; j <= 2 * n ; j++){
            cin >> d[i][j];
            if(i != j) minn = min(minn,d[i][j]);
        }
    }
    backtrack(1);
    cout << res;
    return 0;
}
