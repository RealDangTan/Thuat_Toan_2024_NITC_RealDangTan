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
    int a,b;cin>>a>>b;
    for(int i=min(a,b);i>0;i--){
        if(a%i==0&&b%i==0&&arr[i]) {cout<<i<<endl;return 0;}
    }
    cout<<-1<<endl;
}