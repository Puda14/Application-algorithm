//Nhị phân hàm mũ
#include<bits/stdc++.h>
using namespace std;
int POW(int x, int n){
    if(n==0) return 1;
    if(n % 2 != 0) return x * pow(x, n-1);
    int res = POW(x, n/2);
    return res*res;
}
//==> O(log(n))

int main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);
    int x, n;
    cin >> x >> n;
    cout << POW(x,n);
    return 0;
}