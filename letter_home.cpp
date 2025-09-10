#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>nums(n);
        int mini=101,maxi=0;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            mini=min(mini, nums[i]);
            maxi=max(maxi, nums[i]);
        }
        if(mini!=maxi){
            if(abs(s-mini)>abs(maxi-s)){
                cout<<maxi-mini+abs(maxi-s);
            }else{
                cout<<maxi-mini+abs(s-mini);
            }
        }else{
            cout<<abs(s-mini);
        }
        cout<<endl;
    }
} 