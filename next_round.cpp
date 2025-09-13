#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> nums(n);
    int cnt=0;

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int check=nums[k-1];
    for(int x:nums){
        if(x>0 and x>=check){
            cnt++;
        }
    }

    cout<<cnt<<endl;
    return 0;
}
