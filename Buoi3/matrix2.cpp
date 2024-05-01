#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<vector<int>> arr(n, vector<int>(n,0));
    int k=1,x=0,y=n-1;
    while(k<=n*n){
        for(int i=x;i<=y;i++){
            arr[x][i]=k;k++;
        }
        for(int i=x+1;i<=y;i++){
            arr[i][y]=k;k++;
        }
        for(int i=y-1;i>=x;i--){
            arr[y][i]=k;k++;
        }
        for(int i=y-1;i>=x+1;i--){
            arr[i][x]=k;k++;
        }
        x++;y--;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}