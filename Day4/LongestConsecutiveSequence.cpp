#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> uset;
    for(int num:nums){
        uset.insert(num);
    }

    int longestStreak = 0;
    for(int num: uset){
        if(uset.find(num-1)==uset.end()){
            int currNum = num;
            int currStreak = 1;
            while(uset.find(currNum+1)!=uset.end()){
                currNum+=1;
                currStreak+=1;
            }
            longestStreak = max(longestStreak,currStreak);
        }
    }
    return longestStreak;
}
int main()
{

    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<longestConsecutive(nums);
    return 0;
}

/*
Test Case:

*/