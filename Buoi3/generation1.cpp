#include<bits/stdc++.h>
using namespace std;
vector<int> bina;

void binary(int n, vector<int> bina){
    if(n==0){
        for(auto a:bina) cout<<a;
        cout<<endl;
    }
    else{
        bina.push_back(0);
        binary(n-1,bina);
        bina.pop_back();

        bina.push_back(1);
        binary(n-1,bina);
        bina.pop_back();
    }
}

int main(){
    int n;cin>>n;
    binary(n,bina);
}