#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag=true;
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]!=-1){
                flag=false;
            }
        }
        
        int maxi=0;
        int mini=INT_MAX;
        for(int x:a){
            maxi=max(maxi,x);
            mini=min(mini,x);
            //cout<<"maxi:"<<maxi<<endl;
            // cout<<k-maxi+2<<endl;
        }
        if(flag==true){   // all negative in b
            int upper=mini+k;
            int lower=maxi;
            cout<<upper-lower+1<<endl;
        }
        else{
            int sum=-1;
            bool flag1=false;
            for(int i=0;i<n;i++){
                
                if(b[i]!=-1){
                    int add=a[i]+b[i];
                    if(add<maxi){
                        cout<<0<<endl;
                        flag1=true;
                        break;
                    }
                    if(add>k){
                        cout<<0<<endl;
                        flag1=true;
                        break;
                    }
                    if(sum==-1){
                        sum=add;
                    }else{
                        if(add!=sum){
                            cout<<0<<endl;
                            flag1=true;
                            break;
                        }
                        else {
                            continue;
                        }
                    }
                }
                if(flag1){
                    break;
                }
            }
            if(flag1){
                continue;
            }
            else{
                for(int i=0;i<n;i++){
                    if(b[i]==-1){
                        int x=sum-a[i];
                        if(x<0 || x>k){
                            cout<<0<<endl;
                            flag1=true;
                            break;
                        }
                    }
                    if(flag1){
                        break;
                    }
                }
                if(flag1){
                    continue;
                }
                else{
                    cout<<1<<endl;
                }
            }
        }
        //cout<<endl;
    }
    return 0;
}