#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1;
    cin>>s2;
    int i=0;
    bool val=true;
    for(char ch: s1){
        if(tolower(ch)<tolower(s2[i])){
            cout<<-1;
            val=false;
            break;
        }
        else if(tolower(ch)>tolower(s2[i])){
            cout<<1;
            val=false;
            break;
        }
        i++;
    }
    if(val){
        cout<<0;
    }
    
    return 0;
}