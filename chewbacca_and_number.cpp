#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	vector<int> nums;
	while(n>0){
		nums.push_back(n%10);
		n/=10;
	}
	reverse(nums.begin(),nums.end());
	int i;
	for(i=0;i<nums.size();i++){
		if(i==0 and nums[i]==9){
			continue;
		}
		else{
			nums[i]=min(nums[i],9-nums[i]);
		}
	}
	// for(;i<nums.size();i++){
		
	// }
	long long res=0;
	//int i=0;
	// for(i=0;i<nums.size();i++){
	// 	if(nums[i]!=0){
	// 		break;
	// 	}
	// }

	for(int i=0;i<nums.size();i++){
		res=(res*10)+nums[i];
	}

	cout<<res<<endl;
}