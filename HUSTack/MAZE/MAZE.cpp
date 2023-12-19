#include <bits/stdc++.h>
using namespace std;

const int maxN = 999 + 10;
int a[maxN][maxN], m, n, r, c, d[maxN][maxN];
int dx[] = {1 , 0, -1 ,  0};
int dy[] = {0 , 1,  0 , -1};

queue<pair<int,int>> q;

// void show_array(){
//         for(int i = 1 ; i <= m ; i ++){
//         for(int j = 1 ; j <= n ; j++)
//             cout << a[i][j];
//         cout << '\n';
//     }
//     cout <<"=====================\n";
// }

int solve(){

    q.push(pair<int,int>(r,c));
    d[r][c] = 0 ; a[r][c] = 2;
    while(!q.empty()){
        pair<int, int> u = q.front(); q.pop();
        for(int i = 0 ; i < 4 ; i++){
            int x = u.first + dx[i];
            int y = u.second + dy[i];
            // cout << "(x,y) = " << x << "," << y <<'\n';
            if(x < 1 || x > m || y < 1 || y > n) return d[u.first][u.second] + 1;
            if(a[x][y] ==0) {
                d[x][y] = d[u.first][u.second] + 1;
                q.push(pair<int, int>(x,y));
                a[x][y] = 2;
            }
        // show_array();
        }
    }
    return -1;
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> m >> n >> r >> c;
    for(int i = 1 ; i <= m ; i ++)
        for(int j = 1 ; j <= n ; j++)
            cin >> a[i][j];

    int ans =  solve();
    cout << ans;
    return 0;
}