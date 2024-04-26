#include<bits/stdc++.h>
using namespace std;

vector<bool> Eratosthenes(){
    vector<bool> arr(1000000,true);
    for(int i=2;i<=1000000;i++){
        arr[i]=1;
    }
    arr[0]=arr[1]=0;
    for(int i=2;i<sqrt(1000000);i++)
    if (arr[i])
        for(int j=i*i;j<=1000000;j+=i){
            arr[j]=0;
        }
    return arr;
}

int main(){
    vector<bool> arr = Eratosthenes();
    long long res=0;
    long long n;cin>>n;
    for(int i=2;i<n;i++){
        if(arr[i]) res=(res+i%2202018)%2202018;
    }
    cout<<res<<endl;
}