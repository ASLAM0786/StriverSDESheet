#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    int n = intervals.size();
    int m = intervals[0].size();

    vector<vector<int>> ans;
    ans.push_back(intervals[0]);
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (intervals[i][0] <= ans[j][1])
        {
            ans[j][1] = max(intervals[i][1], ans[j][1]);
        }
        else
        {
            ans.push_back(intervals[i]);
            j++;
        }
    }

    return ans;
}
void print(vector<vector<int>> matrix)
{
    cout << "*********Output Start**************************\n";
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "*********Output End**************************";
}
int main()
{

    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrix[i][j];
        }
    }
    vector<vector<int> > ans = merge(matrix);
    print(ans);
    return 0;
}