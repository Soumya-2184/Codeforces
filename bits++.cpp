#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<vector<char>>nums(n,vector<char>(3));

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>nums[i][j];
        }
    }
    int var=0;

    for(int i=0;i<n;i++){
        if(nums[i][1]=='+'){
            var++;
        }else{
            var--;
        }
    }
    cout<<var<<endl;
    return 0;
}
