#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+1;
int a[N], t[N], x[N], M, n, sum = 0;
//t[N] : sum(ak+1 ... an)
//f[N] : result

void show(){
    for(int i = 1 ; i <= n ; i++ ) cout << x[i] << " ";
    cout << '\n';
}

int cnt = 0; //Số nghiệm 
void check(){
    if(sum == M) {
        cnt++ ; 
        // show();
    }
}

void Try(int k){
    int v; // value of X 
    for( v = 1 ; v <= ( M - sum - (t[n]-t[k]) ) / a[k] ; v++ ){
        x[k] = v; 
        sum += v*a[k];
        if(k==n){
            check();
        }
        else{
            Try(k+1);
        }
        sum-= v*a[k];
    }

}

void solve(){
    Try(1);
    cout << cnt;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> M ; 
    t[0] = 0;
    for(int i = 1 ; i <= n ; i++ ) {
        cin >> a[i];
        t[i] = t[i-1] + a[i];
    }
    solve();
    return 0;
}