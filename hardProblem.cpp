#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;

        int row1=m,row2=m;
        long long cnt=0;
        if(a<=row1){
            cnt+=a;
            row1=abs(a-row1);
        }
        else{
            cnt+=row1;
            row1=0;
           
        }
        
        if(b<=row2){
            cnt+=b;
            row2=abs(b-row2);
        }
        else{
            cnt+=row2;
            row2=0;
            
        }
        
        
        int rem=row1+row2;
        if(c<=rem){
            cnt+=c;
        }
        else{
            cnt+=rem;
        }

        cout<<cnt<<endl;

    }
    return 0;
} 