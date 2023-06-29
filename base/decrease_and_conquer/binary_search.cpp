#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+1;
int n, x, a[N];

int binarySearch(int a[], int l, int r, int x){
    while( l <= r ){
        int m = l + (r - l) / 2;
        if(a[m] == x) return 1;
        if(a[m] < x) l = m + 1;
        else r = m - 1; 
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> x;
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }
    sort(a+1,a+n,less<int>());
    // for(int i = 1 ; i <= n ; i++){
    //     cout << a[i] << " ";
    // }
    // cout << "\n";
    if( binarySearch(a,1,n,x) ) cout << "FOUND\n";
    else cout << "NOT FOUND \n!";
}