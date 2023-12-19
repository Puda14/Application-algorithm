#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;
const int LOG = 20;
int a[N];
int m[N][LOG];

int ans(int L, int R){
    int len = R - L + 1;
    int k = 0;
    while(1 << (k+1) < len) k++;
    return min(m[L][k],m[R - (1 << k) + 1][k]);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        m[i][0] = a[i];
    }
    for(int k = 1 ; k <= LOG ; k++){
        for(int i = 0 ; i + (1 << k) - 1 < n ; i++){
            m[i][k] = min(m[i][k-1],m[i + (1 << (k-1))][k-1]);
        }
    }
    int m;
    cin >> m;
    int res = 0;
    int l,r;
    while(m--){
        cin >> l >> r;
        res += ans(l,r);
    }
    cout << res << endl;
}
