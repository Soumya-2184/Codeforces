#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        string r="";
        for(char c:n){
            if(c=='p'){
                r+='q';
            }
            else if(c=='q'){
                r+='p';
            }
            else{
                r+=c;
            }
        }
        reverse(r.begin(),r.end());
        cout<<r<<endl;

    }
    return 0;
} 