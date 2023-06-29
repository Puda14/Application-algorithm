#include <bits/stdc++.h>
using namespace std;

const int MAX = 101;
int n, M;
int a[MAX];
int t[MAX];
int X[MAX];
int f;
int ans;

void initT(){
    t[1] = a[1];
    int i;
    for(i = 2; i <= n; i++) t[i] = t[i-1] + a[i];
}
void solution(){
    if(f == M){
        ans++;
    }   
}
void TRY(int k){
    int v;
    for(v = 1; v <= (M-f-(t[n]-t[k]))/a[k]; v++){
        X[k] = v;
        f += a[k]*X[k];
        if(k == n){
            solution();
        }else{
            TRY(k+1);
        }
        f -= a[k]*X[k];
    }
}
void input(){
    cin >> n >> M;
    int i;
    for(i = 1; i <= n; i++)
        cin >> a[i];
}
void solve(){
    f = 0;
    initT();
    ans = 0;
    TRY(1);
    cout << ans;
}

int main(){
    input();
    solve();
    return 0;
}

