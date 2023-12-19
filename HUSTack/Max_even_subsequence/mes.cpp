#include<bits/stdc++.h>
using namespace std;

#define int long long
const int MIN = -1e9 - 10;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string error = "NOT_FOUND";
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i = 1 ; i <= n ; i++) cin >> v[i];
    vector<int> even(n+1,MIN);
    vector<int> odd(n+1, MIN);
    if(v[1] % 2 == 0) even[1] = v[1];
    else odd[1] = v[1];
    for(int i = 2 ; i <= n ; i++){
        if(v[i] % 2 == 0){
            even[i] = max(even[i-1] + v[i], v[i]);
            if(odd[i-1] == MIN) odd[i] = MIN;
            else odd[i] = odd[i-1] + v[i];
        } else {
            if(odd[i-1] == MIN) even[i] = MIN;
            else even[i] = odd[i-1] + v[i];
            odd[i] = max(even[i-1] + v[i], v[i]);
        }
    }
    int res = LLONG_MIN;
    for(int i =  1 ; i <= n ; i++) res = max(res, even[i]);
    if(res == LLONG_MIN) cout << error << endl;
    else cout << res << endl;
    return 0;
}
