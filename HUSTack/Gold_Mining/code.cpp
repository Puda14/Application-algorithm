#include<bits/stdc++.h>
using namespace std;

#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, L1, L2;
    cin >> n >> L1 >> L2;
    vector<int> v(n+1);
    for(int i = 1 ; i <= n ; i++) cin >> v[i];
    vector<int> dp(n+1);
    int res = 0;
    deque<int> dq;
    for(int i = 1 ; i <= n ; i++){
        while(!dq.empty() && dq.front() < i - L2) dq.pop_front();
        if(i - L1 >= 1){
            while(!dq.empty() && dp[dq.back()] < dp[i - L1]) dq.pop_back();
            dq.push_back(i - L1);
        }
        dp[i] = v[i] + (dq.empty() ? 0 : dp[dq.front()]);
        res = max(res, dp[i]);
    }
    cout << res << endl;
    return 0;
}
