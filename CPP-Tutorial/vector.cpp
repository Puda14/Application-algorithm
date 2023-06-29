#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<int> v){
    for(int i = 0 ; i < v.size() ; i++ ) cout << v[i] << ' ';
}

int main(){

    // Assign vector
    vector<int> v;
    
    // fill the vector with 10 five times
    v.assign(5, 0);
    print_vector(v);
    cout << '\n';

    // inserts 15 to the last position
    v.push_back(15);
    print_vector(v);
    cout << '\n';

    // removes last element
    v.pop_back();
    print_vector(v);
    cout << '\n';

    // inserts 5 at the beginning
    v.insert(v.begin(), 15);
    print_vector(v);
    cout << '\n';   

    // inserts 5 at the ending
    v.insert(v.end(),15);
    print_vector(v);
    cout << '\n'; 

    // removes the first element
    v.erase(v.begin());
    print_vector(v);
    cout << '\n'; 

    // inserts at the beginning
    v.emplace(v.begin(),5);
    v.emplace(v.end(),5);
    print_vector(v);
    cout << '\n'; 

    // Inserts 20 at the end
    v.emplace_back(20);
    print_vector(v);
    cout << '\n'; 

    // erases the vector
    v.clear();
    cout << "size = " << v.size() << '\n';
    return 0;
} 