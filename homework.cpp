#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        string a,b,c;
        cin>>n;
        cin>>a;
        cin>>m;
        cin>>b;
        cin>>c;

        for(int i=0;i<m;i++){
            if(c[i]=='D'){
                a+=b[i];
            }else{
                a=b[i]+a;
            }
        }
        cout<<a<<endl;

    }
    return 0;
}
