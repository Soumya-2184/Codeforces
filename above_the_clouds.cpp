#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        unordered_map<char,int>mp;
        for(int i=1;i<n-1;i++){
            mp[s[i]]++;
        }
        int cnt=0;
        for(pair<int,int> p:mp){
            if(p.first!=s[0] and p.first!=s[n-1]){
                cnt++;
            }
        }
        if(cnt==n-2){
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
        }
    }
}  