#include <bits/stdc++.h>
using namespace std;

void showpq(priority_queue<int, vector<int>, greater<int> > pq)
{
    while (!pq.empty()) {
        cout << ' ' << pq.top();
        pq.pop();
    }
    cout << '\n';
}
 
 void showArray(int* arr, int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main(){
    int arr[6] = { 10, 2, 4, 8, 6, 9 };
    priority_queue<int, vector<int>, greater<int> > pq(arr, arr + 6);
 
    cout << "Array: ";
      showArray(arr, 6);
 
    cout << "Priority Queue : ";
    showpq(pq);
 
    return 0;
}