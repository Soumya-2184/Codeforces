#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s="";
        for(int i=0;i<n-1;i++){
            string ele;
            cin>>ele;
            s+=ele;
            s+=' ';
        }
        string ele;
        cin>>ele;
        s+=ele;
        int cnt=0;
        int word=0;
        int size=s.length();
        int start=0,end=0;
        while(end<size){
            if(s[end]!=' '){
                end++;
            }
            else{
                int x=end-start;
                if(cnt+x<=m){
                    word++;
                    cnt+=x;
                }
                else{
                    break;
                }
                end++;
                start=end;
            }
        }
        int x=end-start;
        if(cnt+x<=m){
            word++;
            cnt+=x;
        }
        cout<<word<<endl;

    }
    return 0;
}            