#include<bits/stdc++.h>
using namespace std;

long long giaithua(long long n){
    if(n==0) return 1;
    return (giaithua(n-1)*n)%1000000007;
}

int main(){
    long long n;cin>>n;
    cout<<giaithua(n);
}