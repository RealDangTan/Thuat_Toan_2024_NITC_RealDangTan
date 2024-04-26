#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    string res;
    map<char,int> dup;
    for(int i=0;i<s.length();i++){
        dup[s[i]]++;
    }
    for(auto x:dup){
        if(x.second>1){
            cout << x.first << " ";
        }
    }
}