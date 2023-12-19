#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a[n];
    long long int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
    }
    cout << mx;

    return 0;
}