#include<bits/stdc++.h>
using namespace std;

int differenceStringTrie(string s){
    set<string> tries;
    for(int i=1;i<=s.size();i++){
        for(int j=0;j<=s.size()-i;j++){
            tries.insert(s.substr(j,i));
        }
    }
    return tries.size();
}

int main(){
    string s;cin>>s;
    cout<<differenceStringTrie(s)<<endl;
}