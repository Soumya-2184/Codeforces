#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int maxi=0;

        int cnt=0;
        for(int i=0;i<n;i++){
            if (s[i] == '1') {
                cnt++;
                maxi = max(maxi, cnt);
            } else {
                cnt = 0;
            }
        }
        if(maxi>=k){
            cout<<"NO"<<endl;
        }else{
            vector<int> ans(n);
            int val=n;

            for(int i=0;i<n;i++){
                if(s[i]=='0'){
                    ans[i]=val;
                    val--;
                }
            }
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    ans[i]=val;
                    val--;
                }
            }
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}