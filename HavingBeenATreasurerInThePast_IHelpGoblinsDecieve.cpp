#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int cnt1=0,cnt2=0;
        for(char ch:s){
            if(ch=='-'){
                cnt1++;
            }else{
                cnt2++;
            }
        }
        if(n<3 || cnt1<2 || cnt2==0){
            cout<<0<<endl;
        }
        // else if(cnt1==2){
        //     cout<<cnt2<<endl;
        // }
        else{
            // int sel1=(cnt1-2)*(cnt1-1)/2;
            // int ans=sel1*cnt2 -cnt2;
            // cout<<ans<<endl;
            int left = cnt1 / 2; // Floor division
            int right = cnt1 - left; // Remaining part
            int ans = left * right * cnt2;
            cout << ans << endl;
        }
    }    
    return 0;
}