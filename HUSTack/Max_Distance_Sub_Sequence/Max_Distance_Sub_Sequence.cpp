#include <bits/stdc++.h>
using namespace std;
#define ll long long
int N,C;

int check(vector<ll> v, int dis){
    int count = 1;
    int i=1,j=2;
    while (i<=N)
    {
        // cout << "dis = "<< dis << "\n";
        while(j<=N && v[j]-v[i] < dis){ 
            // cout << "\n" << "(i,j) = " << i << j << "\n" ;
            // cout << "vj-vi = " << v[j]-v[i] <<"\n";
            j++;
        }
        if(j<=N) count++;
                // cout<<"(i,j) : " << i << "," << j <<'\n';
                // cout<<"count = " << count << '\n';
        if(count >= C) return 1;
        i = j;
        j++;
    }
    return 0;
}

void solve(){
    /*fix*/
    int key;
    int ans;

    cin >> N >> C;
    vector<ll> v(N+1);
    for(int i = 1 ; i <= N ; i++ ) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    // for(int i = 1 ; i <= N ; i++){
    //     cout << v[i] << " ";
    // }

    int l = 0;
    int r = v[N]-v[1];
    int mid;
    while (l<=r)
    {
        mid = l + (r-l) / 2;
        // cout << "\n\n\n\n";
        // cout <<"==========="<<"\n";
        // cout << "mid = " << mid << "\n";
        // cout << "l = " << l << "\n";
        // cout << "r = " << r << "\n";
        // cout <<"==========="<<"\n";
        
        if (key = check(v,mid)) l = mid+1;
        else r = mid-1;
        
        // cout << "check = " << key << "\n\n";
    }
    cout << r << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}