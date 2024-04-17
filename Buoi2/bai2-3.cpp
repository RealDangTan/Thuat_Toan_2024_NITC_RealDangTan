#include<bits/stdc++.h>
using namespace std;

string Restore(string &s){
    string res;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'){
            res+=s[i];
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            res+=s[i]+32;
        }
        else if(s[i]>='0'&&s[i]<='9'){
            res+=s[i];
        }
        else if(s[i]==' ')
    }
}

int main(){
    string s;cin>>s;

}