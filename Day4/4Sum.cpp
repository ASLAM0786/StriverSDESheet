#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int t = target - nums[i];
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                int s = t - nums[j];
                int left = j+1;
                int right = n-1;
                while(left<right){
                    int sum = nums[left]+nums[right];
                    if(s == sum){
                        ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                        while(left<n-1 && nums[left] == nums[left+1]){
                            left++;
                        }
                        while(right>left && nums[right] == nums[right-1] ){
                            right--;
                        }
                        left++;
                        right--;
                    }
                    else if(sum<s){
                        left++;
                    }
                    else{
                        right--;
                    }
                }
            }
        }
        return ans;
    }
int main(){


    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    vector<vector<int>> ans = fourSum(nums,target);
    for(auto val: ans){
        for(int v:val)
            cout<<v<<" ";
        cout<<"\n";
    }
    return 0;
}

/*
Test Case:

*/

