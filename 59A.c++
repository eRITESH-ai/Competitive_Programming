#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int lower=0,upper=0;
    cin>> s;
    for(char ch: s){
        if(islower(ch))lower++;
        else{upper++;}
    }
    string ans="";
    if(lower>=upper){
        for(char ch : s){
            ans+=tolower(ch);
        }
    }
    if(lower<upper){
        for(char ch: s){
            ans+=toupper(ch);
        }
    }
    
    for(char ch : ans){
        cout<<ch;
    }
    return 0;
}