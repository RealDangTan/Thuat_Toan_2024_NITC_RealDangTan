#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int knight_x=s[0]-96,knight_y=s[1]-48;
    int a[]={2,-2},b[]={1,-1};
    int count=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(knight_x-a[i]>=1&&knight_x-a[i]<=8 && knight_y-b[j]>=1&&knight_y-b[j]<=8) count++;
            if(knight_x-b[i]>=1&&knight_x-b[i]<=8 && knight_y-a[j]>=1&&knight_y-a[j]<=8) count++;
        }
    }
    cout<<count<<endl;
}