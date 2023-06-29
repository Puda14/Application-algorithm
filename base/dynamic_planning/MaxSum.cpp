//Đoạn con có tổng lớn nhất
//O(n)
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+1;
int n, a[N];
int iMem[N], bMark[N];

/*No Memory*/ 
// int MaxSum(int i){
//     if(i==1) return a[1];
//     int res = max(a[i], a[i] + MaxSum(i-1));
//     return res;
// }

int MaxSum(int i){
    if(i==1) return a[1];
    
    if(bMark[i]) return iMem[i];

    int res = max(a[i], a[i] + MaxSum(i-1) );
    iMem[i] = res;
    bMark[i] = 1;
    return res;
}

// Truy vết bằng đệ qui: O(n)

void Trace(int i){
    if( i != 1 && iMem[i] == a[i] + iMem[i-1] ){
        Trace(i-1);
    }
    // else return ;
    cout << a[i] << " ";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    
    cin >> n ;
    for( int i = 1 ; i <= n ; i++ ) cin >> a[i];

    memset(bMark, 0, sizeof(bMark));
    
    //Hàm đệ qui sẽ tính toàn bộ các giá trị của MaxSum(i) : 1 <= i <= N
    //Áp đặt cho phần tử đầu
    bMark[1] = 1;
    iMem[1] = a[1]; 
    MaxSum(n);

    cout <<"\n";
    //in mảng iMem[]
    for( int i = 1 ; i <= n ; i++ ) cout << iMem[i] <<" ";
    cout <<"\n\n";

    //Kết quả bài toán là giá trị lớn nhất đã được lưu trong iMem[]
    int ans = 0, pos = 0;
    for( int i = 1 ; i <= n ; i++ ){
        ans = max(ans, iMem[i]);
        if(ans == iMem[i]) pos = i;
    }
    cout << "Max Sum = " << ans <<"\n";
    cout << "pos = " << pos << "\n";

    cout << "\n";

    //Truy vết bằng đệ qui: O(n)
    Trace(pos);

    cout << "\n\n";

    //Truy vết bằng vòng lặp: O(n)
    int first = pos, last = pos, sum = a[pos];
    while (sum != ans){
        first--;
        sum += a[first]; 
    }
    cout << first << " " << last <<"\n";
    
    return 0;
}