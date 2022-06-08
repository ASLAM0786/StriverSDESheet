#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int k = n+m-1;
    m--;
    n--;
    while(n>=0){
        nums1[k--] = (m>=0 && nums1[m]>=nums2[n]?nums1[m--]:nums2[n--]);
    }
    
}
void print(vector<int> out)
{
    cout << "*********Output Start**************************\n";
    for (int val : out)
    {
        cout << val << " ";
    }
    cout << "*********Output End**************************";
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin>>m;
    vector<int> nums1(n + m);
    vector<int> nums2(n);
    for (int i = 0; i < m; i++)
    {
        cin >> nums1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> nums2[i];
    }
    merge(nums1,m,nums2,n);
    print(nums1);
    return 0;
}
