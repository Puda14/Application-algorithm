#include <bits/stdc++.h>
using namespace std;
int n,a[100][100]={0},d1[200]={0},d2[200]={0},col[100]={0},d=0;

void print(){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) cout << a[i][j] << " "; 
        cout << endl;
    }
    cout << endl;
    return;
}
void find(int i)
{
    if(i==n+1)
    {
        print();
        d++;
        return;
    }
    for(int j=1;j<=n;j++){
        if(col[j]==0 && d1[i+j-1]==0 && d2[i-j+n]==0){
            col[j]=1;
            d1[i+j-1]=1;
            d2[i-j+n]=1;
            a[i][j]=1;
            find(i+1);
            col[j]=0;
            d1[i+j-1]=0;
            d2[i-j+n]=0;
            a[i][j] = 0;
        }
    }
}

int main(){
    cin >> n;
    find(1);
    cout << d;
    return 0;
}