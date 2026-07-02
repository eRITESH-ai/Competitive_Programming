#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int ans=0;
    vector<vector<int>>arr;
    for(int i=0 ;i<num; i++){
    vector<int>temp;
        for(int j=0 ;j<3;j++){
            int val;
            cin>> val;
            temp.push_back(val);
        }
    arr.push_back(temp);
    }

    for(int i=0 ;i<num; i++){
        int cnt=0;
        for(int j=0; j<arr[i].size();j++){
            if(arr[i][j]==1){
                cnt++;
            }
        }
        if(cnt>=2){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}