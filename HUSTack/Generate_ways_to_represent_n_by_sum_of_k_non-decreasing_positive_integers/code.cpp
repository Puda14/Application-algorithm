#include<bits/stdc++.h>
using namespace std;

int k, n;
vector<int>v;
int sum = 0;

bool check(int pos, int val){
    int minn = (n - sum) / (k - pos + 1);
    return minn >= v[pos-1];
}



void print(){
    for(int i = 1 ; i <= k ; i++) cout << v[i] << " ";
    cout << '\n';
}

void backtrack(int m){
    for(int i = v[m-1] ; i <= n - sum ; i++){
        if(check(m,i)){
            v[m] = i;
            sum += i;
            if(m == k){
                if(sum == n) print();
            } else backtrack(m+1);
            sum -= i;
        }
    }
}
int main() {
    cin >> k >> n;
    v.resize(k+1);
    v[0] = 1;
    backtrack(1);
    return 0;
}
