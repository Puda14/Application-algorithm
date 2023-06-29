// Cài đặt Top-Down với đệ qui có nhớ
// O(n)
#include <bits/stdc++.h>
using namespace std;

#define ll long long

map<ll, ll> Mem;
ll fibonacci(ll n){
    if(n <= 2) return 1;
    if(Mem.find(n) != Mem.end()) return Mem[n];
    ll res = fibonacci(n-2) + fibonacci(n-1);
    Mem[n] = res;
    return res;
}

ll iMem[1001];
ll Fib(ll n){
    if(n<=2) return 1;
    if(iMem[n]!= -1) return iMem[n];
    ll res = Fib(n-2) + Fib(n-1);
    iMem[n] = res;
    return res;
}

int main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);

    for(ll i = 1 ; i<= 1000; i++ ) iMem[i] = -1; 

    ll n;
    cin >> n;
    cout << fibonacci(n) << "\n" << Fib(n) << "\n";
    return 0;
}