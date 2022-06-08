#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        while (nums[i] != (i + 1))
        {
            if (nums[i] == nums[nums[i]] || nums[i] < (i + 1))
                return nums[i];
            swap(nums[i], nums[nums[i]]);
        }
    }
    return nums[n-1];
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

    int res = findDuplicate(nums);
    cout << res;
    return 0;
}
