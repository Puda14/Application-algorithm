#include<bits/stdc++.h>
using namespace std;

const int N = 1e9;
int n, M;
int sum = 0;
int minn = 1e9;
int a[N];
int ans = 0;
int x[N];

void backtrack(int pos){
    for(int i = 1 ; i <= (M - sum - minn * (n - pos)) / a[pos] ; i++){
        x[pos] = i;       
        sum += a[pos] * i;
        if(pos == n){
            if(sum == M) ans++;
            else {
                backtrack(pos+1);
            }
        sum -= a[pos] * i;
        }
    }
}

int main(){
    cin >> n >> M;
    for(int i = 1 ; i <= N ; i++){
        cin >> a[i];
        minn = min(minn, a[i]);
    }
    backtrack(1);
    cout << ans;
}