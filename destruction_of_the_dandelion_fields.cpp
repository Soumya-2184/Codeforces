#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        vector<long long> nums(n);
        vector<long long> odd,even;

        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }

        int s=odd.size();
        if(s==0){
            cout<<0<<endl;
        }else{
            long long sum=0;
            long long even_sum=accumulate(even.begin(),even.end(),0);
            sort(odd.rbegin(),odd.rend());

            int cnt=0;
            
            cnt=(s+1)/2;
            int i=0;

            while(cnt--){
                sum+=odd[i];
                i++;
            }
            sum+=even_sum;
            cout<<sum<<endl;
        }
    }
    return 0;
}
