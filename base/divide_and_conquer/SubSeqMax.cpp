//Đoạn con có tổng lớn nhất
//O(nlogn)
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+1;
int n, a[N];

int MaxLeftMid(int l, int m){
    int maxLM = a[m];
    int sum = 0;
    for(int i = m ; i >= l ; i--){
        sum += a[i];
        maxLM = max(maxLM, sum);
    }
    return maxLM;
}

int MaxRightMid(int m, int r){
    int maxRM = a[m];
    int sum = 0;
    for(int i = m; i <= r ; i++){
        sum += a[i];
        maxRM = max(maxRM, sum);
    }
    return maxRM;
}

int SubSeqMax(int left, int right){
    if(left == right) return a[left];
    int mid = (left+right)/2;
    int wL = SubSeqMax(left, mid); // tổng lớn nhất từ bên trái đến mid
    int wR = SubSeqMax(mid+1, right);//tổng lớn nhất từ bên phải đến mid 
    int maxLM = MaxLeftMid(left, mid);
    int maxRM = MaxRightMid(mid+1, right);
    int wM = maxLM + maxRM; // tổng lớn nhất từ mid sang hai bên
    return max(wM,max(wL,wR));
}

int main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);
    cin >> n ;
    for( int i = 1 ; i <= n ; i++ ) cin >> a[i];
    cout << SubSeqMax(1,n) << '\n';
    return 0;
}