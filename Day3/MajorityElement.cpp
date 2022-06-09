#include <bits/stdc++.h>

using namespace std;
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int num = nums[0];
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (num != nums[i])
        {
            count--;
        }
        else
        {
            count++;
        }

        if (count == 0)
        {
            num = nums[i];
            count = 1;
        }
    }
    return num;
}
int main()
{

    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<majorityElement(nums);
    return 0;
}

/*
Test Case:
n: 3
nums: 3 2 3
output: 3
n: 7
nums: 2 2 1 1 1 2 2
output: 2
*/