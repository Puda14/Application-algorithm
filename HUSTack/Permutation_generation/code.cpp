#include<bits/stdc++.h>
using namespace std;

int n;
char c[] = {'0','1'};
vector<string> ans;
vector<int> v; // store the answer for each position
vector<bool> vis;
void backtrack(int x){
    for(int i = 1 ; i <= n ; i++){
        if(!vis[i]){
            v[x] = i;
            vis[i] = true;
            if(x == n){
                for(int j = 1 ; j <= n ; j++) cout << v[j] << ' ';
                cout << '\n';
            } else backtrack(x+1);
            vis[i] = false;
        }
    }
}

int main()
{
    cin >> n;
    v.resize(n+1);
    vis.resize(n+1);
    for(int i = 1 ; i <= n ; i++) vis[i] = false;
    backtrack(1);
}
