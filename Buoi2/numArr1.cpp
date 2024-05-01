#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int tar, int left, int right){
    if(right >= 1){
        int mid = left+ (right-left)/2; //same to (left+right)/2 but would stop interger overflow
        
        if (tar==arr[mid]) return 1;

        if(arr[mid]>tar) return binarySearch(arr,tar,mid+1,right);
        else return binarySearch(arr,tar,left,mid-1);
    }
    return 0;
}

int main(){
    vector<int> arr;
    int n,x;cin>>n;
    while(n--){
        cin>>x;
        arr.push_back(x);
    }

    int tar;cin>>tar;
    cout<<binarySearch(arr,tar,0,n-1)<<endl;
}