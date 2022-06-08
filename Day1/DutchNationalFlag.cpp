#include <bits/stdc++.h>

using namespace std;

void sort0_1_2(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;
    int n = nums.size();
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid++], nums[low++]);
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high--]);
        }
    }
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
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort0_1_2(vec);
    print(vec);
    return 0;
}