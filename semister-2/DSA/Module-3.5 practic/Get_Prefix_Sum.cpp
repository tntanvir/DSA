#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> u(n);
    u[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        u[i] = v[i] + u[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << u[i] << " ";
    }

    return 0;
}