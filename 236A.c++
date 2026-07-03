#include <bits/stdc++.h>
using namespace std;

int main(){
    string word="";
    cin>>word;
    set<char>st;
    for(char ch : word){
        st.insert(ch);
    }
    if(st.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;

}