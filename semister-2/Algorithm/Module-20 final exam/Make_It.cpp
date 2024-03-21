#include <bits/stdc++.h>
using namespace std;
int ar[10005];
int knapsack(long long int initial, long long int n)
{
    if (initial == n)
    {
        return 1;
    }
    if (initial > n)
    {
        return 0;
    }
    if (ar[initial] != -1)
    {
        return ar[initial];
    }

    int op1 = knapsack(initial + 3, n);
    int op2 = knapsack(initial * 2, n);
    return ar[initial] = op1 || op2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        memset(ar, -1, sizeof(ar));
        int val = knapsack(1, n);
        if (val == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}