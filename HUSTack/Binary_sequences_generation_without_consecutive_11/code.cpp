#include<bits/stdc++.h>
using namespace std;

int n;
char c[] = {'0','1'};
const int MOD = 1e9 + 7;
vector<string> ans;
vector<int> v; // store the answer for each position
vector<bool> vis;

bool check(int pos, char c){
    if(v[pos-1] == '0') return true;
    else {
        if(c == '1') return false;
        else return true;
    }
}

void backtrack(int x){
    for(char m:c){
        if(check(x,m)){
            v[x] = m;
            if(x == n){
                string s = "";
                for(int j = 1 ; j <= n ; j++) s += v[j];
                cout << s << '\n';
            } else backtrack(x+1);
        }
    }
}

int main()
{
    cin >> n;
    v.resize(n+1);
    v[0] = '0';
    backtrack(1);
}
