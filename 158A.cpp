#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int ans=0;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int cutoff=arr[k-1];
    for(int x:arr){
        if(x>=cutoff && x >0){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}