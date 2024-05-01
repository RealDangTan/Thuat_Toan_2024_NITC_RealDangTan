#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    if(n>1&&n<=3) {
        cout<<"NO SOLUTION";
        return 0;
    }
    for(int i=n-1;i>0;i-=2) cout<<i<<' ';
    for(int i=n;i>0;i-=2) cout<<i<<' ';
}
//submitted on cses