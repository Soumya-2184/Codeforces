#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v(5,vector<int>(5));

    int x=0,y=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>v[i][j];
            if(v[i][j]==1){
                x=i+1,y=j+1;
            }
        }
    }

    int moves=abs(3-x)+abs(3-y);
    cout<<moves;

}