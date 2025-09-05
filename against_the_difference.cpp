#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        int cnt=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==nums[i]){
                cnt+=nums[i];
                mp[nums[i]]=0;
            }
        }
        cout<<cnt<< endl;
    }
    return 0;
}