#include<bits/stdc++.h>
using namespace std;

int n;
char c[] = {'0','1'};
const int MOD = 1e9 + 7;
vector<string> ans;
vector<int> v; // store the answer for each position
vector<bool> vis;
void backtrack(int x){
    for(int i = 1 ; i <= n ; i++){
        if(!vis[i]){
            v[x] = i;
            vis[i] = true;
            if(x == n){
                for(int j = 1 ; j <= n ; j++) cout << v[j] << ' ';
                cout << '\n';
            } else backtrack(x+1);
            vis[i] = false;
        }
    }
}

int main()
{
    int k,n;
    cin >> k >> n;
    vector<vector<int>> dp(k+1,vector<int>(n+1,0));
    for(int i = 1 ; i <= n ; i++) dp[1][i] = i;
    for(int i = 2 ; i <= k; i++){
        for(int j = 2 ; j <= n ; j++){
            if(i > j) dp[i][j] = 0;
            else if(i == j) dp[i][j] = 1;
            else {
                dp[i][j] = dp[i][j-1] + dp[i-1][j-1];
                dp[i][j] %= MOD;
            }
        }
    }
    cout << dp[k][n] << endl;
}
