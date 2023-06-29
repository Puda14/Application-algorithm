#include <bits/stdc++.h>
using namespace std;
int main(){

    map<string, int> m;

    // Insert some values into the map
    m["one"] = 1;
    m["two"] = 2;
    m["three"] = 3;

    // assigning the elements from m to m2
    map<string, int> m2(m.begin(), m.end());

    // insert elements in random order
    m.insert(pair<string,int>("four",4));

    map<string, int>::iterator itr = m.begin();
    while (itr != m.end())
    {
        cout << "Key: " << itr->first << ", Value: " << itr->second << '\n';
        ++itr;
    }
    cout << "----------------" << '\n';
    for (map<string, int>::iterator itr = m2.begin(); itr != m2.end(); ++itr) {
        cout << "Key: " << itr->first << ", Value: " << itr->second << '\n';
    }
    cout << "----------------" << '\n';

    // size of map
    cout << "Size of map: " << m.size() << '\n';
    cout << "----------------" << '\n';

    // remove all elements up to
    // element with key="three" in m2
    m2.erase(m2.begin(),m2.find("three"));
    for (map<string, int>::iterator itr = m2.begin(); itr != m2.end(); ++itr) {
        cout << "Key: " << itr->first << ", Value: " << itr->second << '\n';
    }
    cout << "----------------" << '\n';

    //clear map
    m2.clear();
    for (map<string, int>::iterator itr = m2.begin(); itr != m2.end(); ++itr) {
        cout << "Key: " << itr->first << ", Value: " << itr->second << '\n';
    }
    cout << "----------------" << '\n';
    return 0;
}