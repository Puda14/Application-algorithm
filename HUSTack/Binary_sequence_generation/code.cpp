#include<bits/stdc++.h>
using namespace std;

int n;
char c[] = {'0','1'};
vector<string> ans;
vector<char> v; // store the answer for each position
void backtrack(int x){
    for(char j:c){
        v[x] = j;
        if(x == n) {
            string s = "";
            for(int i = 1 ; i <= n ; i++) s += v[i];
            ans.push_back(s);
        } else backtrack(x+1);
    }
}

int main()
{
    cin >> n;
    v.resize(n+1);
    backtrack(1);
    for(string s:ans) cout << s << endl;
}
