#include <bits/stdc++.h>

const int N = 1e6+1;
int n, ans = 0;
int a[N], store[N];

// void printA(){
//     for(int i = 1; i<=n ; i++ ) std::cout<<a[i]<<" ";
//     std::cout<<"\n";
// }

void merge(int l, int m, int r){

    int i = l;
    int j = m+1;
    int index = l;
    int count = 0;
    // std::cout << l << " "<< m  <<" "<< r << "\n";
    while ( i <= m && j <= r )
    {
        if( a[i] <= a[j] ){
            store[index++] = a[i++];
        }
        else{
            count += m - i + 1;
            store[index++] = a[j++];
        }
        // std::cout << "count = " << count <<"\n";
        // printA();
    }

    while( i <= m ){
        store[index++] = a[i++];
    }

    while ( j <= r){
        store[index++] = a[j++];
    }

    for( index=l; index <= r ; index++ ) a[index] = store[index];
    // std::cout<<"Check\n";
    // printA();
    ans += count;
}


void mergeSort(int left, int right){
    // std::cout<< left << " " << right << "\n";
    if(left==right) return;
    int mid = (left+right)/2;
    // std::cout << left << " "<< mid <<" "<< right << "\n";
    mergeSort(left,mid);
    mergeSort(mid+1,right);

    merge(left,mid,right);
}

int main(){
    std::ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);
    std::cin >> n;
    for(int i = 1 ; i <= n ; i++ ) std::cin >> a[i];
    mergeSort(1,n);
    std::cout << ans << '\n';
    return 0;
}