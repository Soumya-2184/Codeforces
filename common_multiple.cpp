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
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        int cnt=0;
        unordered_map<int,int> mp;
        for(int x:nums){
            if(mp.find(x)==mp.end()){
                cnt++;
                mp[x]=1;
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}
