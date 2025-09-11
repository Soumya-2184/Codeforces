#include<bits/stdc++.h>

/*int pairsEqualTarget(vector<int>& nums, int& target){
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int cntPair=0;
    int i=0, j=n-1;
    while(i<j){
        int sum=nums[i]+nums[j];
        if(sum==target){
            cntPair++;
            i++,j--;
        }
        else if(sum<target){
            i++;
        }
        else{
            j--;
        }
    }
    return cntPair;
}*/
int pairsEqualTarget(vector<int>& nums, int& target){
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int cntPair=0;

    int i=0,j=n-1;
    while(i<j){
        int sum=nums[i]+nums[j];
        if(sum<target){
            i++;
        }
        else if(sum>target){
            j--;
        }
        else{
            cntPair++;
            while(i<n-1 and nums[i]==nums[i+1]){
                i++;
            }
            while(j>0 and nums[j]==nums[j-1]){  // 1 4 4 4 4   target=5
                j--;
            }
            i++,j--;
        }
    }
    
    return cntPair;
}