#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int sub_sum(int n, int a[], int f)
{
    if (n == 0)
    {
        if (f == 0)
            return true;
        return false;
    }
    if (dp[n][f] != -1)
        return dp[n][f];
    if (a[n - 1] <= f)
    {
        bool op1 = sub_sum(n - 1, a, f - a[n - 1]);
        bool op2 = sub_sum(n - 1, a, f);
        return dp[n][f] = op1 || op2;
    }
    else
    {
        return dp[n][f] = sub_sum(n - 1, a, f);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int f;
    cin >> f;
    memset(dp, -1, sizeof(dp));
    if (sub_sum(n, a, f) == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}