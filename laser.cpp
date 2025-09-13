#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<int> nums1(n); 
        for(int i=0;i<n;i++){
            cin>>nums1[i];
        }
        vector<int> nums2(m); 
        for(int i=0;i<m;i++){
            cin>>nums2[i];
        }
        // int cnt=0;
        // for(int t:nums1){
        //     if(t<y){
        //         cnt++;
        //     }
        // }
        // for(int t:nums2){
        //     if(t<x){
        //         cnt++;
        //     }
        // }
        
        cout<<n+m<<endl;
        // cout<<cnt<<endl;
    }
}