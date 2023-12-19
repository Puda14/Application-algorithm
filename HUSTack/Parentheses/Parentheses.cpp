#include<bits/stdc++.h>
using namespace std;

bool isOpen(char c){
    if(c == '(' || c == '[' || c == '{') return true;
    else return false;
}

bool isPair(char u, char v){
    if(u == '(' && v == ')') return true;
    else if(u == '[' && v == ']') return true;
    else if(u == '{' && v == '}') return true;
    else return false;
}

int main()
{
    stack<char> st;
    string s;
    cin >> s;
    bool ok = true;
    char u;
    for(char x:s){
        if(isOpen(x)) st.push(x);
        else{
            if(st.empty()){
                cout << 0 << endl;
                return 0;
            }
            u = st.top();
            if(isPair(u,x)) st.pop();
            else{
                cout << 0 << endl;
                return 0;
            }
        }
    }
    if(st.empty()) cout << 1 << endl;
    else cout << 0 << endl;
}
