#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;

    int n=s.length();

    string res="";

    int i=0;

    string ans="NO";

    while(i<n){
        if(res.length()==0 and s[i]=='h'){
            res+='h';
        }
        else if(s[i]=='e' and res[0]=='h'){
            res+='e';
        }
        else if(s[i]=='l' and res[1]=='e'){
            res+='l';
        }
        else if(s[i]=='l' and res[2]=='l' and res[1]=='e'){
            res+='l';
        }
        else if(s[i]=='o' and res[3]=='l' and res[2]=='l'){
            res+='o';
        }

        if(res.length()==5){
            ans="YES";
            break;
        }
        i++;
    }
    cout<<ans<<endl;
    return 0;
}