#include <bits/stdc++.h>

using namespace std;

void input()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int minPrice = INT_MAX;
    int profit = 0;
    for (int val : prices)
    {
        minPrice = min(minPrice, val);
        profit = max(profit, val - minPrice);
    }

    return profit;
}
int main()
{
    input();
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    int res = maxProfit(prices);
    cout<<res;

    return 0;
}

/*
    Test Cases:
    1- [7,1,5,3,6,4]
    Ans- 5

    2- [7,6,4,3,1]
    Ans - 0
*/