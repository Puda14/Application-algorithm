// CHƯA ĐÚNG
// Bài toán đổi tiền từ các mệnh giá D1,...,Dn
#include <bits/stdc++.h>
using namespace std;

const int N = 1e2 + 1;
const int oo = 1e5;
int n, x, D[N];
int iMem[N][N];

// No Memory: too low !
// int MinCoin(int i, int x){
//     if( x < 0 ) return oo;
//     if( x == 0 ) return 0;
//     if( i == 0 ) return oo;
    
//     int res = oo;
//     res = min(res, 1 + MinCoin(i, x - D[i] ) );
//     res = min(res, MinCoin(i-1, x) );

//     return res;
// }

int MinCoin(int i, int x){
    if( x < 0 ) return oo;
    if( x == 0 ) return 0;
    if( i == 0 ) return oo;

    if( iMem[i][x] ) return iMem[i][x];
    int res = oo;
    if(x>=D[i])res = min(res, 1 + MinCoin( i, x - D[i] ) );
    res = min(res, MinCoin( i - 1 , x ) );
    iMem[i][x] = res;
    // cout << "iMem[" << D[i] << "][" << x << "]" << " = " << res <<"\n"; 
    return res;
}

//Truy vết bằng đệ qui O(max(n,x))
void Trace(int i, int x){
    if( x <= 0 || i == 0 ) return ;
    
    int res = oo;
    if(iMem[i][x] == 1 + iMem[i][x - D[i]]){
        cout << D[i] << " ";
        Trace(i, x - D[i]);
    }
    else{
        Trace(i-1, x);
    }
}

int main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);
    cin >> n >> x;
    for(int i = 1 ; i <= n ; i++) cin >> D[i];
    
    memset(iMem, 0, sizeof(iMem));
    cout << MinCoin(n, x) <<"\n";
    int ans = iMem[n][x];
    cout << ans << "\n";

    //Truy vết bằng đệ qui
    Trace(n,x);

    //Truy vết bằng vòng lặp
    for(int i = n, k = 0; k < ans; ++k ){
        if(iMem[i][x] == 1 + iMem[i][x-D[i]]){
            cout << D[i] << " ";
            x -= D[i];
        }
        else{
            --i;
        }
    }

    return 0;
}