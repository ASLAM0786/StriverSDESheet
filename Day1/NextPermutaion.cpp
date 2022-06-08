#include <bits/stdc++.h>

using namespace std;
void nextPermutation(vector<int>& nums){
    int start = nums.size()-2;
    while(start>=0 && nums[start+1]<nums[start]){
        start--;
    }
    if(start>=0){
        int end = nums.size()-1;
        while(nums[end]<nums[start]){
            end--;
        }
        swap(nums[end],nums[start]);
    }
    start++;
    reverse(nums.begin()+start,nums.end());
}

void print(vector<int> out){
    cout<<"*********Output Start**************************\n";
    for(int val:out){
        cout<<val<<" ";
    }
    cout<<"*********Output End**************************";
}

int main(){
    int n ;
    cin>> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    nextPermutation(nums);
    print(nums);
    return 0;
}
/*
 Test cases::
Input:   [1,2,3]
Output: [1,3,2]
Input:  [3,2,1]
Output: [1,2,3]
*/