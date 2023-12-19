#include<bits/stdc++.h>
using namespace std;

int n, L, m;
set<string> key;
char num[] = {'0','1','2','3','4','5','6','7','8','9'};
int sz;
string res = "";
bool isDone = false;
vector<char> v;

string no = "";

void backtrack(int x){
    for(char u:num){
        if(isDone) return;
        v[x] = u;
        if(x == L){
            res = "";
            for(int i = 1 ; i <= L ; i++) res += v[i];
            if(key.count(res) == 0 && res != no){
                key.insert(res);
                sz++;
                if(sz == m + n) isDone = true;
            }
        } else backtrack(x + 1);
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> L >> m;
    sz = n;
    v.resize(L+1);
    string s;
    for(int i = 0 ; i < L ; i++) no += '0';
    for(int i = 0 ; i < n ; i++){
        cin >> s;
        key.insert(s);
    }
    backtrack(1);
    for(string str:key) cout << str << endl;
}
