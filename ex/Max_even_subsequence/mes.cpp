#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+1;
const int _oo = -999999;
int a[N], f0[N], f1[N];
  
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
  
    int n;
    cin >> n;
    f0[0] = 0;
    f1[0] = 0;

    for(int i=1;i<=n;i++){ 
        cin >> a[i];
    }
    
    for(int i=1;i<=n;i++){
        if(a[i]%2==0){
            f0[i] = max(a[i],f0[i-1] + a[i]);
            f1[i] = max(a[i],f0[i-1] + a[i]);
        }
        else{
            f0[i] = 0;
            f1[i] = max(a[i],f0[i-1] + a[i]);
        }
    }

    for(int i=1;i<=n;i++) cout <<f0[i] <<" ";
    cout <<"\n";
    for(int i=1;i<=n;i++) cout <<f1[i] <<" ";
    cout <<"\n";

    int res = 0;
    // for(int i=1;i<=n-1;i++)
    //     for(int j=i+1;j<=n;j++)
    //     if((f[j]-f[i])%2==0) res= max(res,f[j]-f[i]);
    // for(int i = 1 ; i <=n ; i++ ) res= max(res,f[i]);
    cout << res <<"\n";
    return 0;
}