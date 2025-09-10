#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isValid(int a,int b){
    int x=min(a,b);
    int y=max(a,b);
    
    return (2*(x+1))>=y;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        c=c-a,d=d-b;
        if (isValid(a,b) and isValid(c,d)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}