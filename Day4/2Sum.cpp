#include <bits/stdc++.h>

using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> ump;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(ump.find(nums[i])!=ump.end()){
            return {ump[nums[i]],i};
        }
        ump[target-nums[i]] = i;
    }
    return {};
}
int main()
{

    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    vector<int> ans = twoSum(nums,target);
    for(int val: ans){
        cout<<val<<" ";
    }
    return 0;
}

/*
Test Case:

*/