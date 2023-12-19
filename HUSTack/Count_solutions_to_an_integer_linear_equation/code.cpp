#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
int M;
int res = 0;
int sum = 0;
void backtrack(int k){
    int hi = (M - sum) / a[k];
    for(int i = 1 ; i <= hi ; i++){
        sum += i * a[k];
        if(k == n - 1){
            if(sum == M) res++;
        } else {
            backtrack(k+1);
        }
        sum -= i * a[k];
    }
}


int main()
{
    cin >> n >> M;
    a.resize(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    backtrack(0);
    cout << res;
    return 0;
}
