#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>> num;
    vector<string>arr;
    for(int i=0 ;i<num; i++){
        string temp;
        cin>> temp;
        arr.push_back(temp);
    }
    int ans=0;
    for(int i=0; i<num; i++){
        for(char ch: arr[i]){
            if(ch=='+'){
                ans++;
                break;;
            }
            else if(ch=='-'){
                ans=ans-1;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}