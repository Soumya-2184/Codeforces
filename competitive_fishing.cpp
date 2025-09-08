#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool helper(int alice, int bob, vector<int>a, vector<int> b,int m, int k){
    //int al=alice,bo=bob;
    // vector<int>a(m);
    // vector<int>b(m);
    if(m>a.size() || m>b.size()){
        return false;
    }
    int alice_sum=0;
    int bob_sum=0;
    int i=0,j=0;
    int cnt=1;
    while(i<m and j<m){
        // if(alice>0){
        //     //a[i]=i-1;
        //     alice_sum+=a[i]-1;
        //     alice--;
        // }
        // // else if(alice==0 and i<=m-1){
        // //     return false;
        // // }
        // else{
        //     alice_sum+=a[i]-1;
        // }
        if(a[i]<=b[j]){
            alice_sum+=cnt-1;
            i++;
            cnt++;
        }
        else{
            bob_sum+=cnt-1;
            j++;
            cnt++;
        }
        
    }
    while(i<a.size()){
        alice_sum+=cnt-1;
        i++;
    }
    while(j<b.size()){
        bob_sum+=cnt-1;
        j++;
    }
    // for(int i=0;i<m;i++){
    //     // if(bob>0){
    //     //     bob_sum+=(i-1);
    //     //     bob--;
    //     // }
    //     // // else if(alice==0 and i<=m-1){
    //     // //     return false;
    //     // // }
    //     // else{
    //     //     b[i]=(i-1)*bob;
    //     //     alice_sum+=(i-1)*bob;
    //     // }
    // }
    // cout<<alice_sum<<" "<<bob_sum<<endl;
    return bob_sum-alice_sum>=k;
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int alice=0,bob=0;
        vector<int>a;
        vector<int>b;
        int cnt=1;
        for(char x:s){
            if(x=='1'){
                bob++;
                b.push_back(cnt);
                cnt++;
            }else{
                alice++;
                a.push_back(cnt);
                cnt++;
            }
        }
        // for(int x:b){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // for(int x:a){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        //cout<<alice<<" "<<bob;
        //int mid=min(alice,bob);
        int ans=-1;
        int low=0,high=n;
        while(low<=high){
        //int m=INT_MAX;
            int m=low+(high-low)/2;
            //int m=mid;
            // if(m>a.size() || m>b.size()){
            //     high=m;
            // }
            while(low<=high and (m>a.size() || m>b.size())){
                high=m-1;
                m=low+(high-low)/2;
            }
            if(helper(alice,bob,a,b,m,k)){
                ans=m;
                high=m-1;
            }    
            else{
                low=m+1;
            }
        }   
        // if(ans!=-1 and ans<=a.size() and ans<=b.size()){
        //     cout<<ans<<endl;
        // } 
        // else{
        //     cout<<-1<<endl;
        // }
        cout<<ans<<endl;

    }
    return 0;
}
