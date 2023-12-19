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
    string s1, s2 , T;
    fflush(stdin);
    getline(cin,s1);
    fflush(stdin);
    getline(cin,s2);
    fflush(stdin);
    getline(cin,T);
    vector<string> v;
    string s = "";
    for(int i = 0 ; i < T.length(); i++){
        if(T[i] == ' '){
          v.push_back(s);
          s = "";
        } else {
            s += T[i];
        }
    }
    v.push_back(s);
    for(string x:v){
        if(x == s1){
            cout << s2 << " ";
        } else cout << x << " ";
    }
}
