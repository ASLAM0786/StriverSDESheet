#include <bits/stdc++.h>

using namespace std;
double myPow(double x, int n)
{
    double res = 1;
    while (n)
    {
        if (n % 2)
            res = n > 0 ? res * x : res / x;
        x = x * x;
        n /= 2;
    }
    return res;
}
int main()
{
    double x;
    cin >> x;
    int n;
    cin >> n;
    cout << pow(x, n);
    return 0;
}