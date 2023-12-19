#include<bits/stdc++.h>

using namespace std;

const int N = 30;
vector<vector<int>> d(N,vector<int>(N,0));
int n;
vector<bool> vis(N,false);
int ans = INT_MAX;
int sum = 0;
vector<int> v(N);

void backtrack(int pos){
    for(int i = 2 ; i <= n ; i++){
        if(!vis[i] && sum + d[v[pos-1]][i] < ans){
            vis[i] = true;
            v[pos] = i;
            int len = d[v[pos-1]][v[pos]];
            sum += len;
            if(pos == n){
                ans = min(ans,sum + d[v[pos]][1]);
            } else backtrack(pos+1);
            vis[i] = false;
            sum -= len;
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cin >> d[i][j];
        }
    }
    vis[1] = true;
    v[1] = 1;
    backtrack(2);
    cout << ans;
    return 0;
}
