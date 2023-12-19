#include<bits/stdc++.h>
using namespace std;

int n, L, m;
set<string> key;
char num[] = {'0','1','2','3','4','5','6','7','8','9'};
int sz;
//string res = "";
bool isDone = false;
vector<char> v;

string no = "";



int main()
{
    int n,m;
    cin >> n >> m;
    map<int,int> mp;
    int q = 0;
    int x;
    for(int i = 0 ; i < n ; i++){
        cin >> x;
        q += mp[m-x];
        mp[x]++;
    }
    cout << q << endl;
}
