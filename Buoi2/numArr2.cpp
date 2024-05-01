#include <bits/stdc++.h>
using namespace std;

void kanade(vector<int> &arr){
    int cur_sum = arr[0];
    int cur_max = arr[0];
    int cur_start = 0;
    int start = 0;
    int end = 0;

    for(int i=0;i<arr.size();i++){
        if(cur_sum<0){
            cur_start = i;
            cur_sum = arr[i];
        }
        else cur_sum += arr[i];

        if(cur_sum>cur_max){
            start = cur_start;
            end = i;
            cur_max = cur_sum;
        }
    }
    cout<<start<<' '<<end<<' '<<cur_max;
}

int main(){
    int n;cin>>n;

    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    kanade(arr);

}