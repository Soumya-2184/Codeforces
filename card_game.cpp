#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<char> nums(n);
    map<int,bool> alice;
    map<int,bool> bob;

    for(int i=0;i<n;i++){
        cin>>nums[i];
        if(nums[i]=='A'){
            alice[i+1]=true;
        }else{
            bob[i+1]=true;
        }
    }

    while(!alice.empty() || !bob.empty()){
        
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}