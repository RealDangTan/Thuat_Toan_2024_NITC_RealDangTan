#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    string res;
    for(int i=9;i>1;i--){
        while(n%i==0){
            res+=to_string(i);
            n/=i;
        }
    }
    if(n>1){
        cout<<-1;
        return 0;
    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;
}
