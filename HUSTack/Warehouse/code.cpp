#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, T, D;
    cin >> n >> T >> D;
    vector<int> a(n+1);
    vector<int> t(n+1);
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    for(int i = 1 ; i <= n ; i++) cin >> t[i];
    vector<vector<int>> dp(n+1,vector<int>(T+1,0));
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= T; j++){
            for(int d = 1; d <= D; d++){
                if(j - t[i] >= 0 && i - d >= 0){
                    dp[i][j] = max(dp[i][j], dp[i-d][j-t[i]] + a[i]);
                }
            }
        }
    }
    int ans = 0;
    for(int i = 1 ; i <= n ; i++) ans = max(ans, dp[i][T]);
    cout << ans << endl;
    return 0;
}
