#include<bits/stdc++.h>
using namespace std;

long long fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return (fibo(n-1)+fibo(n-2))%1000000007;
}

long long dynamicFibo(int n){
    vector<long long> f(n+1);
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=(f[i-1]+f[i-2])%1000000007;
    }
    return f[n];
}

int main(){
    long long n;cin>>n;
    cout<<dynamicFibo(n)<<endl;
    cout<<fibo(n)<<endl;
}