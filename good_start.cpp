#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int w,h,a,b;
        cin>>w>>h>>a>>b;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        bool ish=false,isv=false;
        if(a>b){
            ish=true;
        }else{
            isv=true;
        }
        bool same=false;
        if(ish){
            if(x1+a<=x2<=x1+a+b){
                if((x2-(x1+a))%a!=0){
                    same=false;
                    break;
                }
            }
        }else{
            if(y1+b<=y2<=y1+b+a){
                if((y2-(y1+b))%b!=0){
                    same=false;
                    break;
                }
            }
        }
        if(same){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
}    