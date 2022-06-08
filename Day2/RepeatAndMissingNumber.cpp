#include <bits/stdc++.h>
using namespace std;
pair<int,int> repeatedNumber(vector<int> &nums)
{
    int n = nums.size();
    pair<int,int> p;
    for (int i = 0; i < n; i++)
    {
        while (nums[i] != (i + 1))
        {
            if (nums[i] == nums[nums[i]] || nums[i] < (i + 1))
            {
                p.first = nums[i];
                break;
                i++;
            } 
            swap(nums[i], nums[nums[i]]);
        }
    }
    for (int i = 0; i < n; i++){
        if(nums[i]!=(i+1)){
            p.second = nums[i];
            break;
        }
    }
    cout<<"Ho";
    cout<<p.first<<" "<<p.second;
    return p;
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

    pair<int,int> res = repeatedNumber(nums);
    cout << res.first<<" "<<res.second;
    return 0;
}
