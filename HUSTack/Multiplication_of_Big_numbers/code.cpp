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
    string sa, sb;
    cin >> sa >> sb;
    vector<int> a(sa.size()), b(sb.size());
    for (int i = 0; i < sa.size(); i++)
        a[i] = sa[sa.size() - 1 - i] - '0';
    for (int i = 0; i < sb.size(); i++)
        b[i] = sb[sb.size() - 1 - i] - '0';
    vector<int> c = multiply(a, b);
    print(c);
    return 0;
}
