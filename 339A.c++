#include <bits/stdc++.h>
using namespace std;

int main(){


    string s;
    cin>>s;
    vector<char>arr;
    for(char in : s){
        if(isdigit(in)){
            arr.push_back(in);
        }
    }

    sort(arr.begin(),arr.end());
    for(int i=0; i<arr.size();i++){
        if(i) cout<<'+';
        cout<<arr[i];
    }
    return 0;}


    // string s;
    // int c1=0,c2=0,c3=0;
    // getline(cin,s);
    // for(char ch : s){
    //     if(ch=='1')c1++;
    //     else if(ch=='2')c2++;
    //     else if(ch=='3')c3++;
    // }
    // bool state=true;
    // while(c1--){
    //     if(!state)cout<<'+';
    //     cout<<'1';
    //     state=false;                O(n)
    // }
    // while(c2--){
    //     if(!state)cout<<'+';
    //     cout<<'2';
    //     state=false;
    // }
    // while(c3--){
    //     if(!state)cout<<'+';
    //     cout<<'3';
    //     state=true;
    // }

//     return 0;

// }