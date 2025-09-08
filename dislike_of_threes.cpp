#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int k;cin>>k;
        vector<int> nums(k);

        int val=0;
        for(int i=0;i<k;i++){
            val++;
            while(val%3==0 || (val%10)==3){
                val++;
            }
            nums[i]=val;
        }

        cout<<nums[k-1]<<endl;
    }


    return 0;
}