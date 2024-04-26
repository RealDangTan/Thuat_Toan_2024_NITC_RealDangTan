#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;cin>>n;
    long long res=1;
    for(long long i=2;i<=n;i++){
        res*=i;
        while(res%10==0) res/=10;
        res = res%100;
    }
    cout<<res%10<<endl;
}