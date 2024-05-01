#include <bits/stdc++.h>
using namespace std;

int longestCSC(vector<int> &arr, int i,int j){
    int count=2,k=arr[j]-arr[i];
    for(int x=j+1;x<arr.size();x++){
        if(arr[x]-arr[i]==k*count) count++;
    }
    return count;
}

int main(){
    int n;cin>>n;
    int max = INT_MIN;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(max<longestCSC(arr,i,j)) max = longestCSC(arr,i,j);
        }
    }

    cout<<max<<endl;
}