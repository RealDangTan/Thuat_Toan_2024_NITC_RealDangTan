#include<bits/stdc++.h>
using namespace std;

string rule(string s, string &res){
    while(s[0]>='a' && s[0]<='z'&&s[0]>='A' && s[0]<='Z') s.erase(0,1);
    res+=toupper(s[0]);

    for(int i = 1; i < s.size(); i++){
        if(s[i]<='9' && s[i]>='0'){
            res += s[i];continue;
        }
        else if(s[i]>='a' && s[i]<='z'){
            res += s[i];continue;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            res += s[i]+32;continue;
        }
        else if(s[i]==',') {
            res+=", "; continue;
        }

        //space rules
        while(s[i]==' ') break;



        res += ' ';
    }

    while (!s.empty() && (s.back() == ' ' || s.back() == ',')) {
        s.pop_back();
    }    
    res+='?';
    return res;
}


int main(){
    string s;
    string res;
    getline(cin,s);
    cout << rule(s,res) << endl;

}