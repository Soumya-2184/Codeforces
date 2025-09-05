#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        
        if(b>a){
            if((n-b)%2==0){
                cout<<"YES"<<endl;
            }else cout<<"NO"<<endl;
        }else{
            if((n-a)%2==0 and (n-b)%2==0){
                cout<<"YES"<<endl;
            }else cout<<"NO"<<endl;
        }
    }
    return 0;
}