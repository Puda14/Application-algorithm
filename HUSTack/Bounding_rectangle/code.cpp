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
    int n;
    cin >> n;
    int x1,y1,x2,y2;
    int x11 = INT_MAX;
    int x22 = INT_MIN;
    int y11 = INT_MIN;
    int y22 = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        x11 = min(x1,x11);
        x11 = min(x2,x11);
        x22 = max(x2,x22);
        x22 = max(x1,x22);
        y11 = max(y1,y11);
        y11 = max(y2,y11);
        y22 = min(y2,y22);
        y22 = min(y1,y22);
    }
    cout << abs(x11 - x22) * abs(y11 - y22) << endl;
}
