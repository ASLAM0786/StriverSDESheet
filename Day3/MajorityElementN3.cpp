#include <bits/stdc++.h>

using namespace std;
vector<int> majorityElement(vector<int> &nums)
{
    int x(-1), y(-1), xCount(0), yCount(0);
    for (int val : nums)
    {
        if (val == x)
            xCount++;
        else if (val == y)
            yCount++;
        else if (!xCount)
            x = val, xCount = 1;
        else if (!yCount)
            y = val, yCount = 1;
        else
            --xCount, --yCount;
        // cout<<x<<" "<<y<<" "<<xCount<<" "<<yCount<<"\n";
    }

    xCount = 0, yCount = 0;
    for (int val : nums)
    {
        if (val == x)
            xCount++;
        else if (val == y)
            yCount++;
    }
    // cout<<x<<" "<<y;
    vector<int> ans;
    int n = nums.size() / 3;
    if (xCount > n)
        ans.push_back(x);
    if (yCount > n)
        ans.push_back(y);
    return ans;
}
void print(vector<int> out){
    cout<<"*********Output Start**************************\n";
    for(int val:out){
        cout<<val<<" ";
    }
    cout<<"*********Output End**************************";
}
int main()
{

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> ans = majorityElement(nums);
    print(ans);
    return 0;
}

/*
Test Case:
n: 3
nums: 3 2 3
output: 3

n: 1
nums: 1
output: 1

n: 2
nums: 1 2 
output: 1,2
*/