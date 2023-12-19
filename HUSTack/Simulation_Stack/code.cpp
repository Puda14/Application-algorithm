#include <bits/stdc++.h>
using namespace std;

vector<int> multiply(vector<int> &a, vector<int> &b) {
    vector<int> c(a.size() + b.size() + 1, 0);
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            c[i + j] += a[i] * b[j];
            c[i + j + 1] += c[i + j] / 10;
            c[i + j] %= 10;
        }
    }
    while (c.size() > 1 && c.back() == 0)
        c.pop_back();
    return c;
}

void print(vector<int> &a) {
    for (int i = a.size() - 1; i >= 0; i--)
        cout << a[i];
    cout << endl;
}

int main() {
    stack<int> st;
    string opt = "";
    int v;
    do{
        cin >> opt;
        if(opt == "#") return 0;
        else if(opt == "PUSH"){
            cin >> v;
            st.push(v);
        } else {
            if(st.empty()) cout << "NULL" << endl;
            else {
                cout << st.top() << endl;
                st.pop();
            }
        }
    } while(1);
}
