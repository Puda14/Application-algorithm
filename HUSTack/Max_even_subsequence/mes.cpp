#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+1;
const long long oo = -1e18;
long long s0[N], s1[N], a[N];
int n;
long long ans = oo;
bool B0[N], B1[N];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
        s0[i] = 0;
        s1[i] = 0;
    }

    if(a[1] % 2 == 0){
        s0[1] = a[1];
        B0[1] = true;
        B1[1] = false; 
    }
    else{
        s1[1] = a[1];
        B0[1] = false;
        B1[1] = true;
    }

    for(int i = 2 ; i <= n ; i++ ){
        // if(a[i]%2==0){

        //     if(s0[i-1]!=oo) {
        //         if(s0[i-1] > 0 ) s0[i] = s0[i-1] + a[i];
        //         else s0[i] = a[i];
        //     }
        //     else s0[i] = a[i];

        //     if(s1[i-1]!=oo) s1[i] = s1[i-1] + a[i];
        //     else s1[i] = oo;

        // }
        // else{

        //     if(s1[i-1]!=oo) s0[i] = s1[i-1] + a[i];
        //     else s0[i] = oo;

        //     if(s0[i-1]!=oo) {
        //         if(s0[i-1] > 0 ) s1[i] = s0[i-1] + a[i];
        //         else s1[i] = a[i];  
        //     }
        //     else{
        //         s1[i] = a[i];
        //     }
        // }  
        if(a[i]%2 == 0){
            if(B0[i-1]){  
                if(s0[i-1] >0) s0[i] = s0[i-1] + a[i]; 
                    else s0[i] = a[i]; 
                    B0[i] = true;  
            }
            else{  
                    s0[i] = a[i]; 
                    B0[i] = true;  
                }
                if(B1[i-1]){
                    s1[i] = s1[i-1] + a[i]; 
                    B1[i] = true;  }
                else{  
                    B1[i] = false; 
                }                
        }else{
                if(B1[i-1]){
                    s0[i] = s1[i-1] + a[i]; 
                    B0[i] = true;  
                }
                else{   
                    B0[i] = false;    
                }
                if(B0[i-1]){   
                    if(s0[i-1] > 0) s1[i] = s0[i-1] + a[i]; 
                        else s1[i] = a[i];  
                        B1[i] = true;   
                    }
                else{    
                    s1[i] = a[i]; 
                    B1[i] = true;     
                }
        }

    }
    // cout << "====================\n";
    // cout << "s0[]: ";
    // for(int i = 1 ; i <= n ; i++){
    //     if(s0[i] == oo ) cout <<"X " ;
    //         else cout << s0[i] << " ";
    // }
    // cout << "\n";
    // cout << "====================\n";
    // cout << "s1[]: ";
    // for(int i = 1 ; i <= n ; i++){
    //     if(s1[i] == oo ) cout <<"X " ;
    //         else cout << s1[i] << " ";
    // }
    // cout << "\n";
   
    for(int i = 1 ; i <= n ; i++ ){
        ans = max(ans,s0[i]);
    }
    // if(ans == oo) cout << "NOT_FOUND";
    // else cout << ans;
    cout << ans;
    return 0;
}