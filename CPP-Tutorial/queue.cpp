#include <bits/stdc++.h>
using namespace std;

void print_queue(queue<int> q){
    while (!q.empty())
    {
        cout << q.front() << '\n';
        q.pop();
    }
    cout << '\n';
}

int main(){
    queue<int> q;
    q.push(20);
    q.push(21);
    q.push(22);
    print_queue(q);
    return 0;
}