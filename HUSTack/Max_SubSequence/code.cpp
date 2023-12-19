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
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    vector<int> dp(n+1);
    dp[1] = a[1];
    int res = dp[1];
    for(int i = 2 ;i <= n ; i++){
        dp[i] = max(dp[i-1] + a[i], a[i]);
        res = max(res, dp[i]);
    }
    cout << res << endl;
}
