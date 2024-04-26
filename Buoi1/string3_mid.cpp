#include<bits/stdc++.h>
using namespace std;

string rule(string s, string &res){
    res+=toupper(s[0]);

    for(int i = 1; i < s.size(); i++){
        if(s[i]<='9' && s[i]>='0'){
            res += s[i];
        }
        else if(s[i]>='a' && s[i]<='z'){
            res += s[i];
        }
        else if(s[i]>='A' && s[i]<='Z'){
            res += s[i]+32;
        }
        else if(s[i]==' '&&s[i+1]==' ') {i++;}
        else if(s[i] == ' ' && s[i]=='?' && s[i]==','){
            res += s[i];
        }
        else res += ' ';
    }
    return res;
}


int main(){
    string s;
    string res;
    getline(cin,s);
    cout << rule(s,res) << endl;

}