#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;

    // Adds the element at the top of the stack
    s.push(21);
    s.push(22);
    s.push(23);
    //s.pop();
    cout << "size of stack = " << s.size() << '\n';
    while (!s.empty())
    {
        int num = s.top();
        cout << num << '\n';
        s.pop();
    }
    
    return 0;
}