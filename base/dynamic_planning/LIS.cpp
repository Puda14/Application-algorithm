// longest increasing subsequence
// dãy con tăng dài nhất O(n^2)
// dùng khi n <= 10^4
// từ trái sang phải và không liên tiếp
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 1;
vector<int> a(N);
vector<int> LIS(N,1);
int n;


void printLIS(){
    cout << "print LIS: ";
    for(int i = 1 ; i <= n ; i++ ){
        cout << LIS[i] << " ";
    }
    cout << "\n";
}

int main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);
    cin >> n;
    for(int i = 1 ; i <= n ; i++ ) cin >> a[i];
    
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j < i ; j++ ){
            if(a[j] < a[i]){
                LIS[i] = max(LIS[i], LIS[j]+1);
            }
        }
    printLIS();
    int ans = 0, pos = 0;
    for(int i = 0 ; i <= n ; i++) {
        ans = max(ans, LIS[i]);
        if(ans==LIS[i]) pos = i;
    }
    cout << ans << "\n";

    //Truy vết:
    stack<int> s; s.push(pos);
    int key = LIS[pos];
    for(int i = pos-1 ; i >= 1 ; i-- ){
        if (key != LIS[i] + 1) continue;
        key = LIS[i];
        s.push(i);
    }
    while (!s.empty()){
        cout << a[s.top()] << " ";
        s.pop();
    }
    
    return 0;
}