#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long k,l1,r1,l2,r2;
        cin>>k>>l1>>r1>>l2>>r2;
        long long cnt=0;
        for(long long i=l1;i<=r1;i++){
            long long j=i;
            //long long n;
            // if(l2<=l1){
            //     j=i;
            //     n=0;
            // }
            while(j<l2){
                j*=k;
            }
            
            
            // while(j<=r2){
            //     //if((j/i)==pow(k,n)){
            //     cnt++;
            //     j*=k;
            //     //n++;
            //     //}
            //     // else{
            //     //     j++;
            //     // }
            // }
            cnt += floor(log((double)r2 / j) / log(k)) + 1;
        }
        cout<<cnt<<endl;

    }
    return 0;
}