#include<bits/stdc++.h>
using namespace std;

vector<long long> fibo(int n){
    vector<long long> arr(n+1);
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i]=(arr[i-1]+arr[i-2])%1000000007;
    }
    return arr;
}

int main(){
    int n;cin>>n;
    vector<long long> tmp= fibo(n);
    cout<<tmp[n]<<endl;

}