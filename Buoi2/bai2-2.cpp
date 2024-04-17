#include<bits/stdc++.h>
using namespace std;

string checking(string &s){
    bool checker = true;
    while(s.length()>0&&checker){
        checker = false;
        if((s[0]-'0')%3==0) {s.erase(0,1);checker=true;}
        else if((s[s.length()-1]-'0')%3==0) {s.pop_back();checker=true;}
        else {
            if ((s[0]+s[s.length()-1]-2*'0')%3==0){
                s.erase(0,1);
                s.pop_back();
                checker=true;
            }
        }  
    }
    return s;
}


int main(){
    string s;cin>>s;
    cout<<checking(s)<<endl;
}