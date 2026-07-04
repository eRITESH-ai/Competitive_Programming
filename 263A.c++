#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>matrx(5,vector<int>(5));
        int I,J=0;

    for(int i=0; i<5;i++){
        for(int j=0 ;j<5;j++){
            cin>>matrx[i][j];
            if(matrx[i][j]==1){ I=i;J=j;}
            }
    }
    int ans=abs(I-2)+abs(J-2);
    cout<<ans;
    return 0;}
    // int cnt=0;
    // while(I!=2 || J!=2){
    //     if(I<2){
    //         I++;
    //         cnt++;
    //     }
    //     if(I>2){
    //         I--;
    //         cnt++;
    //     }
    //     if(J<2){
    //         J++;
    //         cnt++;
    //     }
    //     if(J>2){
    //         J--;
    //         cnt++;
    //     }
    // }
    // cout<<cnt;

//     return 0;
// }