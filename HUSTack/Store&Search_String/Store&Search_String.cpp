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
    set<string> s;
    string opt = " ";
    cin >> opt;
    while(opt != "*"){
        s.insert(opt);
        cin >> opt;
    }
    string word;
    do{
        cin >> opt;
        if(opt == "***") break;
        cin >> word;
        if(opt == "find"){
            if(s.count(word) == 0) cout << 0 << endl;
            else cout << 1 << endl;
        } else if(opt == "insert"){
            if(s.count(word) == 0){
                cout << 1 << endl;
                s.insert(word);
            } else cout << 0 << endl;
        }
    } while(opt != "***");
}
