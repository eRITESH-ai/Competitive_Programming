#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<string>arr;
    for(int i=0 ;i<num;i++){
        string temp;
        cin>>temp;
        arr.push_back(temp);
    }

    for(int i=0; i<num; i++){
        if(arr[i].size()<=10){
            cout<<arr[i]<<'\n';
        }
        else{
            int end_ind=arr[i].size();
            char start =arr[i][0];
            char end = arr[i][end_ind-1];
            cout<<start<<arr[i].size()-2<<end<<'\n';
        }
    }
    return 0;
}