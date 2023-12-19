#include <iostream>
#include <vector>
using namespace std;

vector<int> build_lps(string P) {
    int m = P.size();
    vector<int> lps(m, 0);
    int len = 0;
    for (int i = 1; i < m; ) {
        if (P[i] == P[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

int count_occurrences(string T, string P) {
    int n = T.size();
    int m = P.size();
    vector<int> lps = build_lps(P);
    int cnt = 0;
    int j = 0;
    for (int i = 0; i < n; ) {
        if (T[i] == P[j]) {
            i++;
            j++;
        }
        if (j == m) {
            cnt++;
            j = lps[j - 1];
        } else if (i < n && T[i] != P[j]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return cnt;
}

int main() {
    string T, P;
    fflush(stdin);
    getline(cin, P);
    fflush(stdin);
    getline(cin, T);
    cout << count_occurrences(T, P) << endl;
    return 0;
}
