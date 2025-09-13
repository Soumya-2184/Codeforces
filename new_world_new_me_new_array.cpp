#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,p;
        cin>>n>>k>>p;
        int ans=ceil(abs(k)/(1.0*p));
        if(ans<=n){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }    
    return 0;
}
